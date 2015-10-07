#include <libft.h>

int	main(int argc, char **argv)
{
	int	arg;
	arg = 1;
	while (arg < argc)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
