/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
	: button1("Zero Slider")
	, slider1(Slider::LinearHorizontal, Slider::NoTextBox)
{
	slider1.setRange(0.0f, 100.0f);
	label1.setEditable(true);

	slider1.addListener(this);
	button1.addListener(this);
	label1.addListener(this);

	slider1.setValue(100.0, sendNotification);

	addAndMakeVisible(&button1);
	addAndMakeVisible(&slider1);
	addAndMakeVisible(&label1);

	setSize (200, 100);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (Colours::aliceblue));

    /*g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
	*/
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	button1.setBoundsRelative(0.05f, 0.05f, 0.90f, 0.25f);
	slider1.setBoundsRelative(0.05f, 0.35f, 0.90f, 0.25f);
	label1.setBoundsRelative(0.05f, 0.65f, 0.90f, 0.25f);
}

void MainContentComponent::labelTextChanged(Label* label)
{
	if (&label1 == label)
	{
		slider1.setValue(label1.getText().getDoubleValue(), sendNotification);
		label1.setText(String(slider1.getValue()), dontSendNotification);
	}
}

void MainContentComponent::buttonClicked(Button* button)
{
	if (&button1 == button)
	{
		slider1.setValue(0.0, sendNotification);
	}
}

void MainContentComponent::sliderValueChanged(Slider* slider)
{
	if (&slider1 == slider)
	{
		label1.setText(String(slider1.getValue()),sendNotification);
	}
}