/*
  ==============================================================================

    Note.cpp
    Created: 12 Feb 2015 9:04:53am
    Author:  stokern

  ==============================================================================
*/

#include "Note.h"

Note::Note(const String& name, const String& contents)
	: textValueObject(contents)
{
	setName(name);
	editor.setMultiLine(true);
	editor.setReturnKeyStartsNewLine(true);
	editor.getTextValue().referTo(textValueObject);
	addAndMakeVisible(editor);
	editor.addListener(this);
}

Note::~Note()
{
	editor.removeListener(this);
}

void Note::textEditorTextChanged(TextEditor&) {}
void Note::textEditorReturnKeyPressed(TextEditor&) {}
void Note::textEditorEscapeKeyPressed(TextEditor&) {}
void Note::textEditorFocusLost(TextEditor&) {}
