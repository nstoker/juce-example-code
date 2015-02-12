/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	showInTabsButton.setButtonText("Show with tabs");
	showInTabsButton.setToggleState(false, dontSendNotification);
	showInTabsButton.addListener(this);
	addAndMakeVisible(showInTabsButton);

	addTabButton.setButtonText("Add Tab");
	addTabButton.addListener(this);
	addAndMakeVisible(addTabButton);

    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::azure);

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
	Rectangle<int>area(getLocalBounds());
	Rectangle<int> buttonArea(area.removeFromTop(28).reduced(2));
	addTabButton.setBounds(buttonArea.removeFromRight(150));
	showInTabsButton.setBounds(buttonArea);
}

void MainContentComponent::buttonClicked(Button* b)
{
	if (&showInTabsButton == b)
		updateLayoutMode();
	else if (&addTabButton == b)
	{
		// Code to add a tab
	}
}

void MainContentComponent::updateLayoutMode()
{
	// code to change the window
}