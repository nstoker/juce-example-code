/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
	: readFileButton("Read Image File")
{
	addAndMakeVisible(&readFileButton);
	addAndMakeVisible(&imageComponent);
	
	readFileButton.addListener(this);

    setSize (500, 400);
}

void MainContentComponent::resized()
{
	int buttonHeight = 20;
	int margin = 10;
	readFileButton.setBounds(margin, margin, getWidth() - margin * 2, buttonHeight);
	imageComponent.setBounds(margin, margin + buttonHeight + margin, getWidth() - margin * 2, getHeight() - buttonHeight - 3 * margin);
}

void MainContentComponent::buttonClicked(Button* button)
{
	if (&readFileButton == button)
	{
		FileChooser chooser("Choose an image file to display");

		if (chooser.browseForFileToOpen())
		{
			image = ImageFileFormat::loadFrom(chooser.getResult());

			if (image.isValid())
				imageComponent.setImage(image);
		}
	}
}