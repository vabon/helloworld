#include "lib.h"

#include "version.h"

int version()
{
	return PROJECT_VERSION_PATCH;
}

int128_t factorial(int128_t number)
{
    if (number <= 1)
        return 1;
    else
        return number * factorial(number - 1);
}
