#include <libft.h>

void	ft_print_words_tables(char **tab)
{
	int	c;

	c = 0;
	while (tab[c][0] != '\0')
	{
		ft_putstr(tab[c]);
		ft_putchar('\n');
		c++;
	}
}
