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
class MainContentComponent   
	: public Component
	, public Button::Listener
{
public:
    //==============================================================================
    MainContentComponent();
    
	void resized();

	void buttonClicked(Button* button);
	
	class AltLookAndFeel : public LookAndFeel_V3
	{
	public: 
		AltLookAndFeel()
		{
			setColour(Slider::thumbColourId, Colours::blueviolet);
		}
	};

private:
    //==============================================================================
	Slider slider1;
	Slider slider2;
	ToggleButton toggle1;
	AltLookAndFeel altLookAndFeel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
