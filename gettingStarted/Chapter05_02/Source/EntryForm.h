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

#ifndef __JUCE_HEADER_A131E58A3E1F4C14__
#define __JUCE_HEADER_A131E58A3E1F4C14__

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
class EntryForm  : public Component,
                   public LabelListener
{
public:
    //==============================================================================
    EntryForm ();
    ~EntryForm();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void labelTextChanged (Label* labelThatHasChanged);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	ValueTree personData;

	static const Identifier personId;
	static const Identifier firstNameId;
	static const Identifier lastNameId;
	static const Identifier ageId;
	static const Identifier addressId;
	static const Identifier line1Id;
	static const Identifier line2Id;
	static const Identifier line3Id;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label1;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> firstNameField;
    ScopedPointer<Label> ageField;
    ScopedPointer<Label> lastNameField;
    ScopedPointer<Label> line1Field;
    ScopedPointer<Label> line2Field;
    ScopedPointer<Label> line3Field;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EntryForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_A131E58A3E1F4C14__
