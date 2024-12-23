/*
** EPITECH PROJECT, 2017
** losd
** File description:
** s
*/

#include "rush.h"

void print_rslt(int occ, float freq, char *c)
{
	my_putchar(c[0]);
	my_putchar(':');
	my_put_nbr(occ);
	my_putchar(' ');
	my_putchar('(');
	my_print_float(freq);
	my_putchar('%');
	my_putchar(')');
	my_putchar('\n');
}
