#include "libft.h"

void	ft_cswap(char *a, char *b)
{
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

char *ft_strrev(char *str)
{
	int length;
	int debut;
	int fin;

	debut = 0;
	length = ft_strlen(str);
	fin = length - 1;
	while (debut < fin)
	{
		ft_cswap(&str[debut], &str[fin]);
		debut++;
		fin--;
	}
	return (str);
}
