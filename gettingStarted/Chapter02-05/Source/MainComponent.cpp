/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (200, 200);
}


void MainContentComponent::paint (Graphics& g)
{
	Random &r(Random::getSystemRandom()); 
	g.fillAll(Colours::aliceblue);

	for (int i = 0; i < 20; ++i)
	{
		g.setColour(Colour(r.nextFloat(), r.nextFloat(), r.nextFloat(), r.nextFloat()));
		
		const float lineThickness = r.nextFloat() * 5.f + 1.f;
		const float startX = r.nextFloat() *getWidth();
		const float startY = r.nextFloat() *getHeight();
		const float endX = r.nextFloat() * getWidth();
		const float endY = r.nextFloat()*getHeight();
		g.drawLine(startX, startY, endX, endY, lineThickness);
	}

}

