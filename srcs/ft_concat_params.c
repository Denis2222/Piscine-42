#include <libft.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		a;
	int		length;

	a = 1;
	length = 0;
	while (a < argc)
		length += (ft_strlen(argv[a++]) + 1);
	str = malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	a = 1;
	while (a < argc)
	{
		ft_strcat(str, argv[a++]);
		ft_strcat(str, "\n");
	}
	str[length] = '\0';
	return (str);
}
