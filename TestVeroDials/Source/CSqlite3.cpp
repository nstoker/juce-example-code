/*
  ==============================================================================

    CSqlite3.cpp
    Created: 15 Feb 2015 4:28:42pm
    Author:  Neil Stoker

  ==============================================================================
*/

#include "CSqlite3.h"

CSQLite3::CSQLite3(void)
{
	//
}

CSQLite3::~CSQLite3(void)
{
	//
}

bool CSQLite3::Initialize(void)
{
	// Needs some helper function to initially open the database (tied to main application), execute a command, execute a scalar and so on
	// Initialise the database to the latest specification
	int version = 0;

	// Get SQLite3 version
	// SELECT sqlite_version() as sqlite_version

	// Set foreign key support on
	// if sql.exec PRAGMA foreign_keys = ON
	// Logresult as "Local database foreign key support is " ON| OFF

	// Get schema version 
	// SELECT MAX(SchemaVersion) FROM SystemInfo
	// if sql.next() verson = SchemaVersion

	// Algorthm for updating tables

	bool bResult = true;

	const char* const queries[] =
	{
		// Schema Version 1 - just for initial setup
		"CREATE TABLE name  (ID INTEGER NOT NULL)",
		0,
		// Add version 2 here
		0
		// And two zeros in a row flag the end of the updates
	};

	int new_version = 0;
	for (int i = 0; queries[i]; ++i)
	{
		if (new_version > version)
		{
			// If the database needs restarting between versions
			if (-1 == new_version)
			{
				// Close the database
				// Open the database
			}
			
			// Did the query execute
			if (!(bResult = 0 /* execute sql queries[i] */))
				break; // Did not execute so break out

			if (0 == queries[i + 1])
			{
				if (new_version > version)
				{
					// INSERT INTO SystemInfo(SchemaVersion) VALUES (new_version)
					version = new_version;
				}

				++new_version;
				++i; // To skip past the 0 record
			}
		}
	}

	return bResult;
}
