#include <libft.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int w;

	x = 0;
	w = 0;
	while (str[x] != '\0')
	{
		if (ft_isalnum(str[x]))
		{
			if (!w)
			{
				if (ft_isalpha(str[x]))
					str[x] = str[x] - ('a' - 'A');
				w++;
			}
		}
		else
			w = 0;
		x++;
	}

	return (str);
}
