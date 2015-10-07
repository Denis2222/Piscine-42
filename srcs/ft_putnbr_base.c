#include <libft.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	lbase;
	lbase = ft_strlen(base);

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}

	if (nbr > lbase - 1)
	{
		ft_putnbr_base(nbr/lbase, base);
		ft_putnbr_base(nbr%lbase, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}
