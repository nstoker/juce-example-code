/*
  ==============================================================================

    CSqlite3.h
    Created: 15 Feb 2015 4:28:41pm
    Author:  Neil Stoker

  ==============================================================================
*/

#ifndef CSQLITE3_H_INCLUDED
#define CSQLITE3_H_INCLUDED

#include "sqlite3.h"

class CSQLite3
{
public:
	CSQLite3(void);
	~CSQLite3(void);

	static bool Initialize();
	
};



#endif  // CSQLITE3_H_INCLUDED
