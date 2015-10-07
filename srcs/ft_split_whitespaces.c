#include <libft.h>

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int		nbwords;
	int		new;
	int		c;

	new = 0;
	c = 0;
	nbwords = 0;
	while (str[c] != '\0')
	{
		if (!ft_iswhitespace(str[c]))
		{
			new++;
			if (new == 1)
				nbwords++;
		}
		else
			new = 0;
		c++;
	}
	return (nbwords);
}

int		ft_count_word_length(char *str, int word, int *start)
{
	int		w;
	int		new;
	int		c;
	size_t	length;
	
	w = -1;
	new = 0;
	c = 0;
	length = 0;
	while (str[c] != '\0')
	{
		if (!ft_iswhitespace(str[c]))
		{
			new++;
			if (new == 1)
			{
				w++;
				if (w == word)
					*start = c;
			}
			if (w == word)
				length++;
		}
		else
			new = 0;
		c++;
	}
	return (length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		nbwords;
	int		c;
	int		wstart;
	int		wlength;
	nbwords = ft_count_words(str);
	tab = malloc(sizeof(char *) * nbwords + 1);
	c = 0;
	while (c < nbwords)
	{
		wstart = 0;
		wlength = ft_count_word_length(str, c, &wstart);
		tab[c] = malloc(sizeof(char) * wlength + 1);
		ft_strncpy(tab[c], &str[wstart], wlength);
		c++;
	}
	tab[c] = malloc(sizeof(char) * 1);
	tab[c][0] = '\0';
	return (tab);
}
