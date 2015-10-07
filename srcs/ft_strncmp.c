#include <libft.h>

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < n - 1 && ++x);
	return (s1[x] - s2[x]);
}
