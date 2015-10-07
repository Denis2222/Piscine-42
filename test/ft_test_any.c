#include <libft.h>

int main(int argc, char **argv)
{
	t_stock_par *params;
	
	params = ft_param_to_tab(argc, argv);
	ft_print_words_tables(params[1].tab);

	ft_putnbr(ft_any(params[1].tab, &ft_str_is_alpha));
	return (1);
}
