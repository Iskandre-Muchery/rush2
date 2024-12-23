/*
** EPITECH PROJECT, 2017
** CPoolDay04
** File description:
** my_strlen
*/

#include "rush.h"

int     my_strlen(char const *str)
{
    int z;

    z = -1;
    while (str[++z]);
    return (z);
}
