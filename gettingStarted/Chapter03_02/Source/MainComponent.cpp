/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	for (int i = 0; i < 10; ++i)
	{
		String buttonName;
		buttonName << "Button " << String(i+1);
		TextButton* button = new TextButton(buttonName);
		buttons.add(button);
		addAndMakeVisible(button);
	}

	setSize (500, 400);
}

MainContentComponent::~MainContentComponent()
{
	/*for (int i = 0; i < buttons.size(); ++i)
		delete(buttons[i]);*/
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	Rectangle<int> rect(10, 10, getWidth() - 20, getHeight() - 20);
	
	int buttonHeight = rect.getHeight() / buttons.size();

	for (int i = 0; i < buttons.size(); ++i)
	{
		buttons[i]->setBounds(rect.getX(), i * buttonHeight + rect.getY(), rect.getWidth(), buttonHeight);
	}
}
