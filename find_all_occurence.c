/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** find_all_occurence
*/

#include <stdio.h>
#include "rush.h"

int count_arg(char **av)
{
	int	nb_arg = 0;
	int	it = 1;

	while (av[++it])
		nb_arg += 1;
	return (nb_arg);
}

int find_all_occurence_and_frequencies(char *str, char **av)
{
	int	it = 2;
	int	max = count_arg(av);
	int	occ[max];
	float	freq[max];
	
	if (occ == 0 || freq == 0)
		return (84);
	while (av[it])
	{
		occ[it] = find_an_occurence(str, av[it]);
		freq[it] = find_frequencie(str, occ[it]);
		print_rslt(occ[it], freq[it], av[it]);
		it += 1;
	}
	estimate_and_print_language(av, freq, max);
	return (0);
}
