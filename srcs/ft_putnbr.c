#include <libft.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}

	if (nbr > 9)
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
	else
	{
		ft_putchar('0'+nbr);
	}
}
