#include <libft.h>

void	ft_put_param_in_tab(t_stock_par *par, char *str)
{
	par->size_param = ft_strlen(str);
	par->str = str;
	par->copy = ft_strdup(str);
	par->tab = ft_split_whitespaces(str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					a;
	struct s_stock_par	*elem;
	
	elem = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	a = 0;
	while (a < ac)
	{
		ft_put_param_in_tab(&(elem[a]), av[a]);
		a++;
	}
	elem[a].str = 0;
	return (elem);
}

void				ft_show_tab(struct s_stock_par *par)
{
	int	a;
	a = 0;
	while (par[a].str != 0)
	{
		ft_putstr(par[a].str);
		a++;
	}
}
