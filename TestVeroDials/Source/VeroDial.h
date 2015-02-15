/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_D0E8DBB5668C5D4__
#define __JUCE_HEADER_D0E8DBB5668C5D4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class VeroDial  : public Component,
                  public SliderListener
{
public:
    //==============================================================================
    VeroDial ();
    ~VeroDial();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	struct VeroDialScales
	{
		String measuring;
		String units;
		float minValue, maxValue;	// Max and min values for the scale
		float redAmber;				// Boundary between the lower Red and Amber scales
		float amberGreen;			// Boundary between the lower Amber and Green scales
		float greenAmber;			// Boundary between the upper Green and Amber scales
		float amberRed;				// Boundary between the upper Amber and Red scales
	};

	void setScales(const VeroDial::VeroDialScales newScales);
	void setUnitsFont(Font /*newFont*/);
	Font getUnitsFont();

	//==============================================================================
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	VeroDialScales scales;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<Slider> slider;
    ScopedPointer<Label> unitsLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VeroDial)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D0E8DBB5668C5D4__
