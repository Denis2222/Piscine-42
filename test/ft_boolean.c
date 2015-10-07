#include <ft_boolean.h>
#include <ft_abs.h>

t_bool	ft_is_even(int nbr)
{
	if (EVEN(nbr))
		return (TRUE);
	else
		return (FALSE);
}

int	main(int argc, char **argv)
{
	ft_putnbr(ABS(5));

	(void)argv;
	if (ft_is_even(argc) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
