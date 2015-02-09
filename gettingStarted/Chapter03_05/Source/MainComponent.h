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
	, public Slider::Listener
{
public:
    //==============================================================================
    MainContentComponent();
    void resized();

	void buttonClicked(Button*);
	void sliderValueChanged(Slider*);

private:
    //==============================================================================
	ScopedPointer<Button> button1;
	ScopedPointer<Slider> slider1;
	ScopedPointer<Label> label1;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
