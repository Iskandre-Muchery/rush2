/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** print_float
*/

#include "rush.h"

void my_print_float(float nb)
{
	int	cpy = nb;
	int	tmp;

	if (nb == 100.00)
	{
		my_putstr("100.00");
		return ;
	}
	tmp = nb / 10.00;
	if (tmp != 0)
		my_putchar(tmp + '0');
	tmp = cpy % 10;
	my_putchar(tmp + '0');
	my_putchar('.');
	tmp = (nb - cpy) * 100;
	my_put_nbr(tmp);
	if (tmp == 0)
		my_putchar('0');
}
