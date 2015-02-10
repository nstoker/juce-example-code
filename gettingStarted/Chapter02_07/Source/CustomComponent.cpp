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

#include "CustomComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
CustomComponent::CustomComponent ()
{
    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::Rotary);
    slider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    slider->setColour (Slider::backgroundColourId, Colour (0xff4f774f));
    slider->setColour (Slider::thumbColourId, Colours::green);
    slider->addListener (this);

    addAndMakeVisible (title = new Label ("new label",
                                          TRANS("DisplayDetails")));
    title->setFont (Font (15.00f, Font::plain));
    title->setJustificationType (Justification::centred);
    title->setEditable (false, false, false);
    title->setColour (TextEditor::textColourId, Colours::black);
    title->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (value = new Label ("new label",
                                          TRANS("4.2")));
    value->setFont (Font (20.00f, Font::bold));
    value->setJustificationType (Justification::centred);
    value->setEditable (false, false, false);
    value->setColour (Label::backgroundColourId, Colour (0xff2f992f));
    value->setColour (Label::outlineColourId, Colours::green);
    value->setColour (TextEditor::textColourId, Colours::black);
    value->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (units = new Label ("new label",
                                          TRANS("mg/l")));
    units->setFont (Font (15.00f, Font::plain));
    units->setJustificationType (Justification::centredLeft);
    units->setEditable (false, false, false);
    units->setColour (TextEditor::textColourId, Colours::black);
    units->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (140, 160);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

CustomComponent::~CustomComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    title = nullptr;
    value = nullptr;
    units = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CustomComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0x5905e4c7));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CustomComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    slider->setBounds (0, 0, 136, 144);
    title->setBounds (0, 104, 136, 24);
    value->setBounds (43, 132, 50, 24);
    units->setBounds (94, 136, 47, 16);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void CustomComponent::sliderValueChanged (Slider* sliderThatWasMoved)
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

void CustomComponent::setRanges(String newTitle, String newUnits, float minVal, float maxVal)
{
	title->setText(newTitle, sendNotification);
	units->setText(newUnits, sendNotification);

}

void CustomComponent::setValue(float val)
{
	value->setText(String(val), sendNotification);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="CustomComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="140" initialHeight="160">
  <BACKGROUND backgroundColour="5905e4c7"/>
  <SLIDER name="new slider" id="16f99038e3e2bd88" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="0 0 136 144" bkgcol="ff4f774f" thumbcol="ff008000"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="2e89c94ff92c4286" memberName="title" virtualName=""
         explicitFocusOrder="0" pos="0 104 136 24" edTextCol="ff000000"
         edBkgCol="0" labelText="DisplayDetails" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b41fe1e9d3178c22" memberName="value" virtualName=""
         explicitFocusOrder="0" pos="43 132 50 24" bkgCol="ff2f992f" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="4.2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="20" bold="1" italic="0" justification="36"/>
  <LABEL name="new label" id="6157599db38ad9a1" memberName="units" virtualName=""
         explicitFocusOrder="0" pos="94 136 47 16" edTextCol="ff000000"
         edBkgCol="0" labelText="mg/l" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
