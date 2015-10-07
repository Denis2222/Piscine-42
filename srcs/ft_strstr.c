#include <libft.h>

char	*ft_strstr(char *str, const char *to_find)
{
	int	pos;
	int x;

	pos = 0;
	x = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[x++])
		{
			if (to_find[x] == '\0')
				return (&str[pos - x + 1]);
		}
		else
			x = 0;
		pos++;
	}
	return (0);
}
