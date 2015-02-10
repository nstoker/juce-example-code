/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	setSize(800, 600);
	dial1.setRanges("Volts", "mV", 0, 100);
	dial2.setRanges("Amps", "mA", 2, 15);
	dial3.setRanges("Power", "mW", 1, 14);
	dial4.setRanges("Resistance", "ohms", 1, 14);
	dial5.setRanges("Conductance", "", 1, 2);
	dial6.setRanges("Swedish Milk", "", 1, 100);

	dial1.setValue(1.0);
	dial2.setValue(2.0);
	dial3.setValue(3.0);
	dial4.setValue(4.0);
	dial5.setValue(5.0);
	dial6.setValue(6.0);


	addAndMakeVisible(&dial1);
	addAndMakeVisible(&dial2);
	addAndMakeVisible(&dial3);
	addAndMakeVisible(&dial4);
	addAndMakeVisible(&dial5);
	addAndMakeVisible(&dial6);
}

MainContentComponent::~MainContentComponent()
{
}

//void MainContentComponent::paint (Graphics& g)
//{
//	(void)(g); // Silences a compiler warning
//    //g.fillAll (Colour (0xff001F36));
//}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	dial1.setTopLeftPosition(20, 20);
	dial2.setTopLeftPosition(dial1.getX() + dial1.getWidth() + 20, dial1.getY());
	dial3.setTopLeftPosition(dial1.getX() , dial1.getY() + dial1.getHeight()+20);
	dial4.setTopLeftPosition(dial2.getX() , dial3.getY());
	dial5.setTopLeftPosition(dial1.getX(), dial3.getY() + dial4.getHeight() + 20);
	dial6.setTopLeftPosition(dial4.getX(), dial5.getY());
}
