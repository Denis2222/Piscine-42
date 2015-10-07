#include "libft.h"

int ft_strlen(char *str)
{
	int l;
	l = 0;
	while (*str)
	{
		str++;
		l++;
	}

	return l;
}
