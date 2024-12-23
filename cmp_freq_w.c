/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** cmp_freq_a
*/

#include "rush.h"

char cmp_freq_w(float freq)
{
	float	diff[4];
	char	c;

	diff[0] = freq - 2.360;
	diff[1] = freq - 0.074;
	diff[2] = freq - 1.921;
	diff[3] = freq - 0.017;
	if (diff[0] < 0)
		diff[0] = diff[0] * -1;
	else if (diff[1] < 0)
		diff[1] = diff[1] * -1;
	else if (diff[2] < 0)
		diff[2] = diff[2] * -1;
	else if (diff[3] < 0)
		diff[3] = diff[3] * -1;
	c = cmp(diff);
	return (c);
}
