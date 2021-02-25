#include <string.h>
#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	printf("%d\n", ft_strcmp("mine", "mine"));
	printf("%d\n", strcmp("mine", "mine"));
	return (0);
}
