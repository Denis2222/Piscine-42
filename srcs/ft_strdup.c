#include <libft.h>

char	*ft_strdup(char *src)
{
	char *str;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (0);
	ft_strcpy(str,src);
	return (str);
}
