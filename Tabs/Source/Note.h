/*
  ==============================================================================

    Note.h
    Created: 12 Feb 2015 9:04:53am
    Author:  stokern

  ==============================================================================
*/

#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class Note
	: public Component
	, private TextEditor::Listener
{
public:
	Note(const String& name, const String& contents);
	~Note();

private:
	Value textValueObject;
	TextEditor editor;

	void textEditorTextChanged(TextEditor&) override;
	void textEditorReturnKeyPressed(TextEditor&) override;
	void textEditorEscapeKeyPressed(TextEditor&) override;
	void textEditorFocusLost(TextEditor&) override;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Note);
};



#endif  // NOTE_H_INCLUDED
