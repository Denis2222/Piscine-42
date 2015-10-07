#include <libft.h>


int ft_isbigger(int a, int b)
{
	if (a == b)
		return (0);
	if (a > b)
		return (1);
	return (-1);
}

int	main(void)
{
	int tab[10] = {0,0,0,3,4,5,6,7,8,9};
	int length;
	int c;

	c = 0;
	length = 10;
	/*
	tab = (int*)malloc(sizeof(int) * (length));
	while (c < length)
	{
		tab[c] = c;
		c++;
	}
	*/

	ft_putnbr(ft_is_sort(tab, length, &ft_isbigger));
	return (1);
}
