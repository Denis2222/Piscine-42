#include <libft.h>

char	*ft_strcat(char *dest,	const char *src)
{
	int	x;
	int	y;
	
	x = ft_strlen(dest);
	y = 0;
	while (src[y])
	{
		dest[x+y] = src[y];
		y++;
	}
	dest[x+y] = '\0';
	return (dest);
}
