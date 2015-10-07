char	*ft_strupcase(char *str)
{
	int	x;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - ('a' - 'A');
		x++;
	}

	return (str);
}
