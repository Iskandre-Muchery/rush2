/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** cmp_freq_a
*/

#include "rush.h"

char cmp(float *diff)
{
	char	c = 'E';
	int	it = 0;
	int	it_b = 0;
	
	if (diff[it] > diff[++it_b])
	{
		c = 'F';
		it += 1;
	}	
	if (diff[it] > diff[++it_b])
	{
		c = 'G';
		it += 1;
	}
	if (diff[it] > diff[++it_b])
	{
		c = 'S';
		it += 1;
	}
	return (c);
}

char cmp_freq_a(float freq)
{
	float	diff[4];
	char	c;

	diff[0] = freq - 8.167;
	diff[1] = freq - 7.636;
	diff[2] = freq -6.516;
	diff[3] = freq -11.525;
	if (diff[0] < 0)
		diff[0] = diff[0] * -1.00;
	else if (diff[1] < 0)
		diff[1] = diff[1] * -1.00;
	else if (diff[2] < 0)
		diff[2] = diff[2] * -1.00;
	else if (diff[3] < 0)
		diff[3] = diff[3] * -1.00;
	c = cmp(diff);
	return (c);
}
