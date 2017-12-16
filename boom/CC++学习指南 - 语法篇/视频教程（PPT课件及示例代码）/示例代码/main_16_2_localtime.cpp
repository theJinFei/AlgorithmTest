
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t now = time(NULL);	
	tm info = *localtime(&now);

	int year = info.tm_year + 1900;
	int month = info.tm_mon + 1;
	int day = info.tm_mday;
	int hour = info.tm_hour;
	int minute = info.tm_min;
	int second = info.tm_sec;

	return 0;
}


