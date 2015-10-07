#include <libft.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	delta;

	delta = max - min;
	if (delta <= 0)
		return (0);
	*range = ft_range(min, max);
	return (delta);
}
