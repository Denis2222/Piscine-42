#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int	x;
	int	y;
	
	x = ft_strlen(dest);
	y = 0;
	while (src[y] && y < (int)nb)
	{
		dest[x+y] = src[y];
		y++;
	}
	dest[x+y] = '\0';
	return (dest);
}

