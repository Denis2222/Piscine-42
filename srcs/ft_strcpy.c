#include <libft.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	pos;
	pos = 0;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
