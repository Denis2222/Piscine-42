int	ft_any(char **tab, int(*f)(char *))
{
	int c;
	
	c = 0;
	while (tab[c][0] != '\0')
	{
		if (f(tab[c]))
			return (1);
		c++;
	}
	return (0);
}
