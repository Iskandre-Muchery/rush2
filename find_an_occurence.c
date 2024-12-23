/**CT, 2017
** CPoolrush2
** File description:
** find_an_occurence
*/

int find_an_occurence(char *str, char *av)
{
	int	it = 0;
	char	c = av[0];
	int	occ = 0;

	while (str[it])
	{
		if (c >= 'A' && c <= 'Z')
		{
			if (str[it] == c || str[it] == c + 32)
				occ += 1;
		}
		else if (c >= 'a' && c <= 'z')
		{
			if (str[it] == c || str[it] == c - 32)
				occ += 1;
		}
		it += 1;
	}
	return (occ);
}
