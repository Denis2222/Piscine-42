#include <libft.h>

void	ft_nbr_base_str(int nbr, char *base, char *str) 
{
	int	lbase;
	lbase = ft_strlen(base);

	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nbr *= -1;
	}

	if (nbr > lbase - 1)
	{
		ft_nbr_base_str(nbr/lbase, base, str);
		ft_nbr_base_str(nbr%lbase, base, str);
	}
	else
		ft_strncat(str, &base[nbr], 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		dec;
	int		max;
	int		base_to_length;
	int		count;

	dec = ft_atoi_base(nbr, base_from);
	base_to_length = ft_strlen(base_to);
	max = 1;
	count = 1;
	while (max <= dec)
	{
		max = max * base_to_length;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (0);
	ft_nbr_base_str(dec, base_to, &(*str));
	ft_putstr(str);
	return (nbr);
}
