#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "../logger.h"

namespace Load
{
	void printColor(const char*, const char*);
	void load();
	void unload();
	void reload();
}
