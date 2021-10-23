#include <stdio.h>
#include <ctype.h>

int main(void) {
	int hour, minutes;
	char c;
	printf("Please Enter 12-hour time");
	scanf_s("%d : %d %c ", &hour, &minutes, &c);
	if (hour == 0)
	{
		hour = 12;
	}
	else
	{
		hour = hour;
	}
	if (toupper(c) == 'P')
	{
		hour+=12;
	}
	printf("The equivalent time is => %d:%d", hour, minutes);
	return 0;

}