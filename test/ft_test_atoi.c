#include <libft.h>

int	main(void)
{
	ft_putstr("\n=============================\n");
	char *str[] = {
		"123   ",
		"456   ",
		"-154  ",
		"g555  ",
		"555g  ",
		"-66tt ",
		"--99  ",
		"--33gt",
		" 6    ",
		" -5   ",
		"  -56k",
		"+6    ",
		"--56  ",
		"++56  ",
		" +7   ",
		" ++77 ",
		"+-42  ",
		"-+42  ",
		"\n\t +42",
		'\0'};
	int x = 0;
	
	printf("str   : ft_atoi = atoi \n");
	while (str[x] != '\0'){
		printf("\"%s\" : (%d) = (%d)\n", str[x], ft_atoi(str[x]), atoi(str[x]));
		x++;
	}
	ft_putstr("\n=============================\n");
	return (0);
}
