#include <libft.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t pos;
	pos = 0;

	while (src[pos] != '\0' && pos < n)
	{
		dest[pos] = src[pos];
		pos++;
	}

	if (pos < n)
	{
		while (pos < n)
		{
			dest[pos] = '\0';
			pos++;
		}
	}
	return (dest);
}
