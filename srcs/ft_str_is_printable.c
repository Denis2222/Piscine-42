#include <libft.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_isprint(*str))
			return (0);
		str++;
	}
	return (1);
}
