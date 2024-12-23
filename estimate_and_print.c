/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** estimate_and_print
*/

#include "rush.h"

void print_language2(int e, int f, int g, int s)
{
	int    nb = e;
	int    nb_b = f;

	if (nb < nb_b)
		nb = nb_b;
	nb_b = g;
	if (nb < nb_b)
		nb = nb_b;
	nb_b = s;
	if (nb < nb_b)
		nb = nb_b;
	if (nb == e)
		my_putstr("=> English");
	else if (nb == f)
		my_putstr("=> French");
	else if (nb == g)
		my_putstr("=> German");
	else if (nb == s)
		my_putstr("=> Spanish");
	my_putchar('\n');
}

void print_language(char *language)
{
	int	c_e = 0;
	int	c_f = 0;
	int	c_g = 0;
	int	c_s = 0;
	int	it = 0;

	while (language[it]) {
		if (language[it] == 'E')
			c_e += 1;
		else if (language[it] == 'F')
			c_f += 1;
		else if(language[it] == 'G')
			c_g += 1;
		else if(language[it] == 'S')
			c_s += 1;
		it += 1;
	}
	print_language2(c_e, c_f, c_g, c_s);
	
}

char estimate_language(char *arg, float freq)
{
	char	c = arg[0];
	char	ret;

	switch (c)
	{
	case 'a':
		ret = cmp_freq_a(freq);
		break;
	case 'b':
		ret = cmp_freq_b(freq);
	}
	return (ret);
}

void estimate_and_print_language(char **av, float *freq, int nb_arg)
{
	char	language[nb_arg];
	int	it = 1;
	int	it_l = 0;
	
	while (av[++it]) {
		language[it_l] = estimate_language(av[it], freq[it_l]);
		it_l += 1;
	}
	print_language(language);
}
