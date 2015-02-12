/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "Note.h"
#include "HomePage.h"

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

	addHomeButton.setButtonText("Add Home");
	addHomeButton.addListener(this);
	addAndMakeVisible(addHomeButton);

	addAndMakeVisible(mdp);
	mdp.setBackgroundColour(Colours::transparentBlack);

	updateLayoutMode();
	addTab("Initial tab", "We can do stuff with this");
	
    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
	addTabButton.removeListener(this);
	showInTabsButton.removeListener(this);
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
	addTabButton.setBounds(buttonArea.removeFromRight(100).reduced(2));
	addHomeButton.setBounds(buttonArea.removeFromRight(100));
	showInTabsButton.setBounds(buttonArea);

	mdp.setBounds(area);
}

void MainContentComponent::buttonClicked(Button* button)
{
	if (&showInTabsButton == button)
		updateLayoutMode();
	else if (&addTabButton == button)
	{
		int numTabs = mdp.getNumDocuments();
		addTab("Tab " + String(numTabs), "This is tab number " + String(numTabs) + ".");
	} 
	else if (&addHomeButton == button)
	{
		int numTabs = mdp.getNumDocuments();
		addHomepage("Home " + String(numTabs));
	}
}

void MainContentComponent::updateLayoutMode()
{
	mdp.setLayoutMode(showInTabsButton.getToggleState() ? MultiDocumentPanel::MaximisedWindowsWithTabs : MultiDocumentPanel::FloatingWindows);
}

void MainContentComponent::addTab(const String& name, const String& content)
{
	Note* newNote = new Note(name, content);
	newNote->setSize(200, 200);

	mdp.addDocument(newNote, Colours::lightblue.withAlpha(0.6f), true);
}

void MainContentComponent::addHomepage(const String& name)
{
	// Add a new homepage
	HomePage* newHomePage = new HomePage(name);
	
	mdp.addDocument(newHomePage, Colours::forestgreen, true);
}