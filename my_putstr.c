/*
** EPITECH PROJECT, 2017
** CPoolDay04
** File description:
** my_putstr
*/

#include "rush.h"

int     my_putstr(char const *str)
{
    int i;

    i = -1;
    while (str[++i])
        my_putchar(str[i]);
    return (0);
}
