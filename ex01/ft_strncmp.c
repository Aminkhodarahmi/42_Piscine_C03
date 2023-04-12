
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
    while (i < n)
    {
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
    }
	return (0);
}

int	main(void)
{
	char	src[] = "elo";
	char	srt[] = "hello";
	printf ("res = %d \n", ft_strncmp(src, srt, 3));
	return (0);
}