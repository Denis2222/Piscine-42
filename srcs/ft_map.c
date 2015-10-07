#include <libft.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *result;
	int	c;

	c = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (c < length)
	{
		result[c] = f(tab[c]);
		c++;
	}
	return (result);
}
