/*
  ==============================================================================

    DemoMultiDocumentPanel.h
    Created: 12 Feb 2015 8:51:52am
    Author:  stokern

  ==============================================================================
*/

#ifndef DEMOMULTIDOCUMENTPANEL_H_INCLUDED
#define DEMOMULTIDOCUMENTPANEL_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class DemoMultiDocumentPanel
	: public MultiDocumentPanel
{
public:
	DemoMultiDocumentPanel();
	~DemoMultiDocumentPanel();

	bool tryToCloseDocument(Component*) override;

private:

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DemoMultiDocumentPanel);
};


#endif  // DEMOMULTIDOCUMENTPANEL_H_INCLUDED
