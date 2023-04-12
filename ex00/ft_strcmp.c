
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == s2[i])
	{
		return (0);
	}
	if (s1[i] != s2[i])
	{
		if(s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
	}
	return (0);
}

int	main(void)
{
	char	src[] = "alo";
	char	srt[] = "hello";
	printf ("res = %d \n", ft_strcmp(src, srt));
	return (0);
}