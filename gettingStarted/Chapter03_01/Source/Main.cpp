/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
int main (int argc, char* argv[])
{

	Logger *log = Logger::getCurrentLogger();
	String message("Chapter 3 code");
	log->writeToLog(message);

	// Time handling
	Time time(Time::getCurrentTime());
	RelativeTime oneHour(RelativeTime::hours(1));
	
	Time oneHourAgo(time - oneHour);
	Time inOneHour(time + oneHour);
	Time inTwoHours(inOneHour + oneHour);
	
	bool includeDate = true;
	bool includeTime = true;
	bool includeSeconds = true;
	bool use24HourClock = true;

	String timeStr(time.toString(includeDate, includeTime, includeSeconds, use24HourClock));
	log->writeToLog("the time is             : " + timeStr);
	log->writeToLog("one hour ago it was     : " + oneHourAgo.toString(true, true, true, true));
	log->writeToLog("in one hour it will be  : " + inOneHour.toString(true, true, true, true));
	log->writeToLog("in two hours it will be : " + inTwoHours.toString(true, true, true, true));

	// File handling
	String text("The quick brown fox jumped over the lazy dawg");
	File exe(File::getSpecialLocation(File::currentExecutableFile));
	File exeDir(exe.getParentDirectory());
	File file(exeDir.getChildFile("chapter03_01_test.txt"));
	file.replaceWithText(text);
	String fileText = file.loadFileAsString();
	int64 size = file.getSize();

	log->writeToLog("filetext  : " + fileText);
	log->writeToLog("file path : " + file.getFullPathName());
	log->writeToLog("  created : " + file.getCreationTime().toString(true, true, true, true));
	log->writeToLog(" modified : " + file.getLastModificationTime().toString(true, true, true, true));
	log->writeToLog("     size : " + String(size) + " bytes");

	// Directory handling 
	File root(File::getSpecialLocation(File::userDesktopDirectory).getChildFile("Chapter03_01_tests"));
	File dir1(root.getChildFile("1"));
	File dir2(root.getChildFile("2"));
	File dir1a(dir1.getChildFile("a"));
	File dir2b(dir2.getChildFile("b"));

	Result result(Result::ok());

	result = dir1a.createDirectory();
	if (!result.wasOk()){
		log->writeToLog("Creating dir1/a failed");
		return -1;
	}

	result = dir2b.createDirectory();
	if (!result.wasOk()){
		log->writeToLog("Creating dir2/b failed");
		return -1;
	}

	File rel = dir1a.getChildFile("../../2/b");

	log->writeToLog("root  : " + root.getFullPathName());
	log->writeToLog("dir1  : " + dir1.getRelativePathFrom(root));
	log->writeToLog("dir2  : " + dir2.getRelativePathFrom(root));
	log->writeToLog("dir1a : " + dir1a.getRelativePathFrom(root));
	log->writeToLog("dir2b : " + dir2b.getRelativePathFrom(root));
	log->writeToLog("rel   : " + rel.getRelativePathFrom(root));

	// Array handling
	Array<int> array;
	for (int i = 0; i < 5; i++)
		array.add(i * 1000);

	for (int i = 0; i < array.size(); ++i){
		int value = array[i];
		log->writeToLog("array[" + String(i) + "] = " + String(value));
	}


    return 0;
}
