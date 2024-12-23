/*
** EPITECH PROJECT, 2017
** CPoolDay03
** File description:
** my_put_nbr
*/

#include "rush.h"

void    my_putnbr_unsigned(unsigned int nb)
{
    int z;

    if (nb < 10)
        my_putchar('0' + nb);
    else if (nb >= 10)
    {
        z = (nb % 10);
        nb = (nb - z) / 10;
        my_putnbr_unsigned(nb);
        my_putchar('0' + z);
    }
}

int     my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * -1;
        my_putnbr_unsigned(nb);
    }
    else if (nb >= 0)
        my_putnbr_unsigned(nb);
    return (0);
}
