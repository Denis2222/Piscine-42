#include <libft.h>

int	main(int argc, char **argv)
{
	int	arg;
	arg = argc-1;
	while (arg > 0)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg--;
	}
	return (0);
}
