#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day.
 *
 * @void: take empty arguement.
 *
 */
void jack_bauer(void);

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
