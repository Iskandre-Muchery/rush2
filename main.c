/*
** EPITECH PROJECT, 2017
** CPoolrsuh2
** File description:
** main
*/

#include <stdio.h>
#include "rush.h"

int main(int ac, char **av)
{
	int	ret;

	if (ac < 3)
		return (84);
	ret = find_all_occurence_and_frequencies(av[1], av);
	if (ret == 84)
		return (84);
	return (0);
}
