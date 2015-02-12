/*
  ==============================================================================

    DemoMultiDocumentPanel.cpp
    Created: 12 Feb 2015 8:51:52am
    Author:  stokern

  ==============================================================================
*/

#include "DemoMultiDocumentPanel.h"

DemoMultiDocumentPanel::DemoMultiDocumentPanel()
{
	// 
}

DemoMultiDocumentPanel::~DemoMultiDocumentPanel()
{
	//
}

bool DemoMultiDocumentPanel::tryToCloseDocument(Component* component)
{
#if JUCE_MODAL_LOOPS_PERMITTED
	// Attempt to close documents
#endif

	return true;
}