#include <libft.h>

int ft_add(int x)
{
	return (x + 1);
}

int	main(void)
{
	int *tab;
	int length;
	int c;

	c = 0;
	length = 10;
	tab = (int*)malloc(sizeof(int) * (length));
	while(c < length)
	{
		tab[c] = c;
		c++;
	}

	tab = ft_map(tab, length, &ft_add);
	ft_foreach(tab, length, &ft_putnbr);

	return (1);
}
