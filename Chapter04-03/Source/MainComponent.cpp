/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
	: readFileButton("Read Image File?...")
	, button2("Attempt 2")
{
	addAndMakeVisible(&readFileButton);
	addAndMakeVisible(&imageComponent);
	addAndMakeVisible(&button2);

	readFileButton.addListener(this);
	button2.addListener(this);
	setSize (600, 400);
}

void MainContentComponent::resized()
{
	int buttonHeight = 40;
	int margin = 10;
	readFileButton.setBounds(margin, margin, getWidth()/2 - margin * 2, buttonHeight);
	button2.setBounds(margin, margin, getWidth() / 2 - margin * 2, buttonHeight);
	button2.setTopLeftPosition( readFileButton.getRight() + margin, readFileButton.getY());
	imageComponent.setBounds(margin, margin + buttonHeight + margin, getWidth() - margin * 2, getHeight() - buttonHeight - margin * 3);
}

void MainContentComponent::buttonClicked(Button* button)
{
	if (&readFileButton == button)
	{
		FileChooser chooser("Choose an image file to display...");
		if (chooser.browseForFileToOpen())
		{
			image = ImageFileFormat::loadFrom(chooser.getResult());

			if (image.isValid())
				imageComponent.setImage(image);
		}
	}
	else if(&button2 == button)
	{
		FileChooser chooser("Choose an image file to display...");
		if (chooser.browseForFileToOpen())
		{
			image = ImageFileFormat::loadFrom(chooser.getResult());

			if (image.isValid())
				imageComponent.setImage(image);
		}
	}
}