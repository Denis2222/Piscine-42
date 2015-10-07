#include <libft.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!ft_isalpha(*str))
			return (0);
		str++;
	}
	return (1);
}
