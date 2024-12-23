/*
** EPITECH PROJECT, 2017
** CPoolrush2
** File description:
** find_frequencies
*/


int count_letters(char *str)
{
	int	it = 0;
	int	nb_letters = 0;

	while (str[it])
	{
		if (str[it] >= 'a' && str[it] <= 'z')
			nb_letters += 1;
		else if (str[it] >= 'A' && str[it] <= 'Z')
			nb_letters += 1;
		it += 1;
	}
	return (nb_letters);
}

float find_frequencie(char *str, int occ)
{
	float	freq;

	freq = ((float) occ * 100) / count_letters(str);
	return (freq);
}
