#include <libft.h>

int	ft_str_is_lowercase(char *str)
{
	if (ft_str_is_alpha(str) && str == ft_strlowcase(str))
		return (1);
	return (0);
}
