/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
	: x(0), y(0)
{
    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::coral);
	g.setColour(Colours::yellowgreen);

    g.setFont (Font (24));
    g.setColour (Colours::white);
    g.drawText (text, 0, 0, getWidth(), getHeight(), Justification::centred, false);
	g.setColour(Colours::yellow);
	const float radius = 10.f;
	g.fillEllipse(x - radius, y - radius, radius * 2.f, radius * 2.f);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::mouseEnter(const MouseEvent &event)
{
	text = "Mouse enter";
	handleMouse(event);
}

void MainContentComponent::mouseMove(const MouseEvent &event)
{
	text = "Mouse move";
	handleMouse(event);
}

void MainContentComponent::mouseDown(const MouseEvent &event)
{
	text = "Mouse down";
	handleMouse(event);
}

void MainContentComponent::mouseDrag(const MouseEvent &event)
{
	text = "Mouse drag";
	handleMouse(event);
}

void MainContentComponent::mouseUp(const MouseEvent &event)
{
	text = "Mouse uP";
	handleMouse(event);
}

void MainContentComponent::mouseExit(const MouseEvent &event)
{
	text = "Mouse eXit";
	handleMouse(event);
}

void MainContentComponent::handleMouse(const MouseEvent &event)
{
	x = event.x;
	y = event.y;
	repaint();
}

