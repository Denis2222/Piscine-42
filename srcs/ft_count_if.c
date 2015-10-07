int	ft_count_if(char **tab, int(*f)(char *))
{
	int c;
	int nb;

	nb = 0;
	c = 0;
	while (tab[c][0] != '\0')
	{
		if (f(tab[c]))
			nb++;
		c++;
	}
	return (nb);
}
