#include <libft.h>

int	*ft_range(int min, int max)
{
	int	delta;
	int	*range;
	int	a;

	a = 0;
	delta = max - min;
	if (delta <= 0)
		return (0);
	range = malloc(sizeof(int) * (delta + 1));
	if (!range)
		return (0);
	while (a <= delta)
	{
		range[a] = a + min;
		a++;
	}
	return (range);
}
