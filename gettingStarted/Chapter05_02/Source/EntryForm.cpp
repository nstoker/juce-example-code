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

#include "EntryForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
EntryForm::EntryForm ()
{
    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("group")));

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("First Name")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label1 = new Label ("new label",
                                           TRANS("Last Name")));
    label1->setFont (Font (15.00f, Font::plain));
    label1->setJustificationType (Justification::centredLeft);
    label1->setEditable (false, false, false);
    label1->setColour (TextEditor::textColourId, Colours::black);
    label1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Age")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Line 1")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Line 2")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Line 3")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (firstNameField = new Label ("firstNameField",
                                                   String::empty));
    firstNameField->setFont (Font (15.00f, Font::plain));
    firstNameField->setJustificationType (Justification::centredLeft);
    firstNameField->setEditable (true, true, false);
    firstNameField->setColour (Label::backgroundColourId, Colours::azure);
    firstNameField->setColour (TextEditor::textColourId, Colours::black);
    firstNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    firstNameField->addListener (this);

    addAndMakeVisible (ageField = new Label ("ageField",
                                             String::empty));
    ageField->setFont (Font (15.00f, Font::plain));
    ageField->setJustificationType (Justification::centredLeft);
    ageField->setEditable (true, true, false);
    ageField->setColour (Label::backgroundColourId, Colours::azure);
    ageField->setColour (TextEditor::textColourId, Colours::black);
    ageField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    ageField->addListener (this);

    addAndMakeVisible (lastNameField = new Label ("lastNameField",
                                                  String::empty));
    lastNameField->setFont (Font (15.00f, Font::plain));
    lastNameField->setJustificationType (Justification::centredLeft);
    lastNameField->setEditable (true, true, false);
    lastNameField->setColour (Label::backgroundColourId, Colours::azure);
    lastNameField->setColour (TextEditor::textColourId, Colours::black);
    lastNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    lastNameField->addListener (this);

    addAndMakeVisible (line1Field = new Label ("line1Field",
                                               String::empty));
    line1Field->setFont (Font (15.00f, Font::plain));
    line1Field->setJustificationType (Justification::centredLeft);
    line1Field->setEditable (true, true, false);
    line1Field->setColour (Label::backgroundColourId, Colours::azure);
    line1Field->setColour (TextEditor::textColourId, Colours::black);
    line1Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line1Field->addListener (this);

    addAndMakeVisible (line2Field = new Label ("line2Field",
                                               String::empty));
    line2Field->setFont (Font (15.00f, Font::plain));
    line2Field->setJustificationType (Justification::centredLeft);
    line2Field->setEditable (true, true, false);
    line2Field->setColour (Label::backgroundColourId, Colours::azure);
    line2Field->setColour (TextEditor::textColourId, Colours::black);
    line2Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line2Field->addListener (this);

    addAndMakeVisible (line3Field = new Label ("line3Field",
                                               String::empty));
    line3Field->setFont (Font (15.00f, Font::plain));
    line3Field->setJustificationType (Justification::centredLeft);
    line3Field->setEditable (true, true, false);
    line3Field->setColour (Label::backgroundColourId, Colours::azure);
    line3Field->setColour (TextEditor::textColourId, Colours::black);
    line3Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line3Field->addListener (this);

    addAndMakeVisible (undoButton = new TextButton ("undoButton"));
    undoButton->setButtonText (TRANS("Undo"));
    undoButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	personData = ValueTree(personId);
	personData.setProperty(firstNameId, String::empty, nullptr);
	personData.setProperty(lastNameId, String::empty, nullptr);
	personData.setProperty(ageId, String::empty, nullptr);

	ValueTree addressData = ValueTree(addressId);
	addressData.setProperty(line1Id, String::empty, nullptr);
	addressData.setProperty(line2Id, String::empty, nullptr);
	addressData.setProperty(line3Id, String::empty, nullptr);
	personData.addChild(addressData, -1, nullptr);

	personData.addListener(this);
    //[/Constructor]
}

EntryForm::~EntryForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    label = nullptr;
    label1 = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    firstNameField = nullptr;
    ageField = nullptr;
    lastNameField = nullptr;
    line1Field = nullptr;
    line2Field = nullptr;
    line3Field = nullptr;
    undoButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EntryForm::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void EntryForm::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent->setBounds (8, 152, 584, 128);
    label->setBounds (17, 56, 70, 24);
    label1->setBounds (16, 88, 70, 24);
    label2->setBounds (16, 120, 70, 24);
    label3->setBounds (16, 176, 70, 24);
    label4->setBounds (16, 208, 70, 24);
    label5->setBounds (16, 240, 70, 24);
    firstNameField->setBounds (120, 56, 456, 24);
    ageField->setBounds (120, 120, 456, 24);
    lastNameField->setBounds (120, 88, 456, 24);
    line1Field->setBounds (120, 176, 456, 24);
    line2Field->setBounds (120, 208, 456, 24);
    line3Field->setBounds (120, 240, 456, 24);
    undoButton->setBounds (24, 288, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void EntryForm::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == firstNameField)
    {
        //[UserLabelCode_firstNameField] -- add your label text handling code here..
		personData.setProperty(firstNameId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_firstNameField]
    }
    else if (labelThatHasChanged == ageField)
    {
        //[UserLabelCode_ageField] -- add your label text handling code here..
		personData.setProperty(ageId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_ageField]
    }
    else if (labelThatHasChanged == lastNameField)
    {
        //[UserLabelCode_lastNameField] -- add your label text handling code here..
		personData.setProperty(lastNameId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_lastNameField]
    }
    else if (labelThatHasChanged == line1Field)
    {
        //[UserLabelCode_line1Field] -- add your label text handling code here..
		personData.setProperty(line1Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line1Field]
    }
    else if (labelThatHasChanged == line2Field)
    {
        //[UserLabelCode_line2Field] -- add your label text handling code here..
		personData.setProperty(line2Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line2Field]
    }
    else if (labelThatHasChanged == line3Field)
    {
        //[UserLabelCode_line3Field] -- add your label text handling code here..
		personData.setProperty(line3Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line3Field]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void EntryForm::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
	undoManager.beginNewTransaction();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == undoButton)
    {
        //[UserButtonCode_undoButton] -- add your button handler code here..
		undoManager.undo();
        //[/UserButtonCode_undoButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
const Identifier EntryForm::personId = "person";
const Identifier EntryForm::firstNameId = "firstName";
const Identifier EntryForm::lastNameId = "lastName";
const Identifier EntryForm::ageId = "age";
const Identifier EntryForm::addressId = "address";
const Identifier EntryForm::line1Id = "line1";
const Identifier EntryForm::line2Id = "line2";
const Identifier EntryForm::line3Id = "line3";

void EntryForm::valueTreePropertyChanged(ValueTree& tree, const Identifier& property)
{
	if (firstNameId == property)
	{
		firstNameField->setText(tree.getProperty(property), dontSendNotification);
	}
	else if (lastNameId == property)
	{
		lastNameField->setText(tree.getProperty(property), dontSendNotification);
	}
	else if(ageId == property)
	{
		ageField->setText(tree.getProperty(property), dontSendNotification);
	}
	else if(line1Id == property)
	{
		line1Field->setText(tree.getProperty(property), dontSendNotification);
	}
	else if(line2Id == property)
	{
		line2Field->setText(tree.getProperty(property), dontSendNotification);
	}
	else if(line3Id == property)
	{
		line3Field->setText(tree.getProperty(property), dontSendNotification);
	}
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="EntryForm" componentName=""
                 parentClasses="public Component, public ValueTree::Listener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff808080"/>
  <GROUPCOMPONENT name="new group" id="f074413a2557a01" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="8 152 584 128" title="group"/>
  <LABEL name="new label" id="857c2d7fcead7105" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="17 56 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="First Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ed64078178dbf39e" memberName="label1" virtualName=""
         explicitFocusOrder="0" pos="16 88 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Last Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="63f52eb9188ce89d" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="16 120 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Age" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="283004523487b1bc" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="16 176 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="84cbe9f0b145ed69" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="16 208 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2f3ee8f4522cc6b9" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="16 240 70 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="firstNameField" id="ca0209fdbcf6d09c" memberName="firstNameField"
         virtualName="" explicitFocusOrder="0" pos="120 56 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="ageField" id="562b6f811572e6d6" memberName="ageField" virtualName=""
         explicitFocusOrder="0" pos="120 120 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lastNameField" id="fde7be2488c2aedd" memberName="lastNameField"
         virtualName="" explicitFocusOrder="0" pos="120 88 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line1Field" id="b19a4ca62315afe4" memberName="line1Field"
         virtualName="" explicitFocusOrder="0" pos="120 176 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line2Field" id="8df978dadc75ff27" memberName="line2Field"
         virtualName="" explicitFocusOrder="0" pos="120 208 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line3Field" id="9af98878b81e516f" memberName="line3Field"
         virtualName="" explicitFocusOrder="0" pos="120 240 456 24" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="undoButton" id="cbb43bdb2bf928f5" memberName="undoButton"
              virtualName="" explicitFocusOrder="0" pos="24 288 150 24" buttonText="Undo"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
