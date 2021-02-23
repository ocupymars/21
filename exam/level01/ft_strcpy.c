#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char	*str2;
	int		i;

	str2 = "hello";
	i = 0;
	while (str2[i])
	{
		i++;
	}
	char str1[i];

	ft_strcpy(str1, str2);
	printf("%s\n", str1);
}
