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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "VeroDial.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
VeroDial::VeroDial ()
{
    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Measuring")));

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::Rotary);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 70, 20);
    slider->addListener (this);

    addAndMakeVisible (unitsLabel = new Label ("new label",
                                               TRANS("units")));
    unitsLabel->setFont (Font (15.00f, Font::plain));
    unitsLabel->setJustificationType (Justification::centredLeft);
    unitsLabel->setEditable (false, false, false);
    unitsLabel->setColour (TextEditor::textColourId, Colours::black);
    unitsLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

VeroDial::~VeroDial()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    slider = nullptr;
    unitsLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void VeroDial::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void VeroDial::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent->setBounds (0, 0, 160, 168);
    slider->setBounds (0 + 78 - ((roundFloatToInt (160 * 0.7813f)) / 2), 0 + 88 - ((roundFloatToInt (168 * 0.7679f)) / 2), roundFloatToInt (160 * 0.7813f), roundFloatToInt (168 * 0.7679f));
    unitsLabel->setBounds (112, 128, 32, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void VeroDial::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="VeroDial" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="new group" id="3896bfaa672dc5aa" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 0 160 168" title="Measuring"/>
  <SLIDER name="new slider" id="e131704f32fe8f96" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="78.5c 88.5c 78.125% 76.786%" posRelativeX="3896bfaa672dc5aa"
          posRelativeY="3896bfaa672dc5aa" posRelativeW="3896bfaa672dc5aa"
          posRelativeH="3896bfaa672dc5aa" min="0" max="10" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="70"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="15a80314197a5b21" memberName="unitsLabel"
         virtualName="" explicitFocusOrder="0" pos="112 128 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="units" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
