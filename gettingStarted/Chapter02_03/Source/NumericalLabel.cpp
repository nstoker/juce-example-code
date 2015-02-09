/*
  ==============================================================================

    NumericalLabel.cpp
    Created: 6 Feb 2015 11:13:17am
    Author:  stokern

  ==============================================================================
*/

#include "NumericalLabel.h"

void NumericalLabel::editorShown(TextEditor* editor)
{
	editor->setInputRestrictions(0, "-0123456789.");
}