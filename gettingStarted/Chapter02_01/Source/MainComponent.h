/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component
{
public:
    //==============================================================================
	MainContentComponent()
		: button1("Click")
		, label1("label1", "Info")
	{
		slider1.setRange(0.0, 100.0);
		addAndMakeVisible(&button1);
		addAndMakeVisible(&slider1);
		addAndMakeVisible(&label1);
		setSize(200, 100);
	}

	/*
	~MainContentComponent();

    void paint (Graphics&);
	*/
	
	void resized()
	{
		button1.setBoundsRelative(0.05, 0.05, 0.90, 0.25);
		slider1.setBoundsRelative(0.05, 0.35, 0.90, 0.25);
		label1.setBoundsRelative(0.05, 0.65, 0.90, 0.25);
	}

private:
    //==============================================================================
	TextButton button1;
	Slider slider1;
	Label label1;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
