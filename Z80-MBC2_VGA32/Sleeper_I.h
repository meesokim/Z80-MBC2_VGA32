#pragma once

#include "runtime.h"

class Sleeper_I
{
public:

	Sleeper_I(void)
	{
	}

	virtual ~Sleeper_I(void)
	{
	}

	virtual void sleep( ulong millis ) = 0;

};
