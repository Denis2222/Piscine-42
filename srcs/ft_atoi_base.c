#include <libft.h>

int find(char *base, char c)
{
	int x;
	
	x = 0;
	while (base[x] != '\0')
	{
		if (base[x] == c)
			return (x);
		x++;
	}
	return (-1);
}

int	checkstr(char *str, char *base)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if((find(base, str[x]) >= 0) || (str[x] == '+' || str[x] == '-'))
			x++;
		else
			return (0);
	}
	return (1);
}

int	checkbase(char *base)
{
	int	x;
	int y;

	x = 0;
	while (base[x] != '\0')
	{
		if (base[x] == '-' || base[x] == '+')
			return (0);
		y = 0;
		while (base[y] != '\0')
		{
			if(y != x && base[y] == base[x])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_atoi_base_r(char *str, char *base)
{
	int	length;
	int	pos;
	int	positive;
	int nb;

	pos = 0;
	positive = 1;
	length = ft_strlen((char *)str);
	nb = 0;

	if (str[0] == '-')
	{
		positive = - 1;
		pos++;
	}
	while (pos < length)
		nb = (nb * ft_strlen(base)) + (find(base, str[pos++]));
	return (nb * positive);
}

int	ft_atoi_base(char *str, char *base)
{
	if (!checkbase(base))
		return (-506);
	if (!find(base, '-') && !find(base, '+'))
		return (-505);
	if (ft_strlen(str) == 0)
		return (-504);
	if(ft_strlen(base) <= 1)
		return (-503);
	if(!checkstr(str, base))
		return (-502);
	return ft_atoi_base_r(str, base);
}

