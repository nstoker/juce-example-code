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

#include "DisplayDials.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DisplayDials::DisplayDials ()
{
    addAndMakeVisible (dial1 = new VeroDial());
    dial1->setName ("new component");

    addAndMakeVisible (dial2 = new VeroDial());
    dial2->setName ("new component");

    addAndMakeVisible (dial3 = new VeroDial());
    dial3->setName ("new component");

    addAndMakeVisible (dial4 = new VeroDial());
    dial4->setName ("new component");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	VeroDial::VeroDialScales dial1scales({ "Voltage", "mV", 0.f, 1000.f, 300.f, 400.f, 600.f, 700.f });
	VeroDial::VeroDialScales dial2scales({ "Current", "mA", 0.f, 1000.f, 250.f, 300.f, 400.f, 500.f });
	VeroDial::VeroDialScales dial3scales({ "Power", "mW", 0.f, 1000.f, 300.f, 400.f, 700.f, 800.f });
	VeroDial::VeroDialScales dial4scales({ "Resistance", "W", 0.f, 1000.f, 300.f, 400.f, 700.f, 800.f });
	dial1->setScales(dial1scales);
	dial2->setScales(dial2scales);
	dial3->setScales(dial3scales);
	dial4->setScales(dial4scales);

	Font f= dial4->getUnitsFont();
	f.setTypefaceName("Symbol");
	dial4->setUnitsFont(f);

    //[/Constructor]
}

DisplayDials::~DisplayDials()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    dial1 = nullptr;
    dial2 = nullptr;
    dial3 = nullptr;
    dial4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DisplayDials::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DisplayDials::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    dial1->setBounds (35, 8, 304, 200);
    dial2->setBounds (32, 224, 150, 128);
    dial3->setBounds (192, 224, 150, 128);
    dial4->setBounds (32, 360, 88, 88);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DisplayDials" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GENERICCOMPONENT name="new component" id="7daacfd0d0cd26ec" memberName="dial1"
                    virtualName="" explicitFocusOrder="0" pos="35 8 304 200" class="VeroDial"
                    params=""/>
  <GENERICCOMPONENT name="new component" id="3517585989bd5743" memberName="dial2"
                    virtualName="" explicitFocusOrder="0" pos="32 224 150 128" class="VeroDial"
                    params=""/>
  <GENERICCOMPONENT name="new component" id="ccdae78c6319bbde" memberName="dial3"
                    virtualName="" explicitFocusOrder="0" pos="192 224 150 128" class="VeroDial"
                    params=""/>
  <GENERICCOMPONENT name="new component" id="51aa6bb5f53548cc" memberName="dial4"
                    virtualName="" explicitFocusOrder="0" pos="32 360 88 88" class="VeroDial"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
