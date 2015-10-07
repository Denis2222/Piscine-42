int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	c;
	int	sens;
	int	first;
	int s;

	sens = 0;
	first = 0;
	c = 0;
	s = 0;
	while (c < length - 1)
	{
		sens = f(tab[c], tab[c + 1]);
		if (!first && sens != 0)
		{
			first++;
			s = sens;
		}
		else if (sens != 0 && sens != s)
			return (0);
		c++;
	}
	return (1);
}
