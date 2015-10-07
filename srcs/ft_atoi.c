#include <libft.h>

int	ft_atoi_white_allow(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v');
}


int	ft_atoi(const char *str)
{
	int nb;
	int	length;
	int	pos;
	int positive;

	pos = 0;
	nb = 0;
	length = ft_strlen((char *)str);
	positive = 1;
	while (ft_atoi_white_allow(str[pos]))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			positive = - 1;
		pos++;
	}
	while (pos < length)
	{
		if (!ft_isdigit(str[pos]))
			return (nb * positive);
		nb = (nb * 10) + (str[pos++] - '0');
	}
	return (nb * positive);
}
