#include <stdio.h>

char	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char	*str;

	str = "niggas in paris";
	printf("Length of string is: %i\n", ft_strlen(str));
}
