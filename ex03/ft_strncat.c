#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *ft_strncat(char *dest, char *src, unsigned int nb)
// {
// 	char	*ptr;
// 	int		lend;
// 	int		lenp;
// 	int		i;
// 	int		j;

// 	lend = 0;
// 	while (dest[lend])
// 	{
// 		lend++;
// 	}

// 	lenp = lend + nb;
// 	ptr = (char*)malloc(lenp + 1);

// 	i = 0;
// 	lend = 0;
// 	while (dest[lend])
// 	{
// 		ptr[i] = dest[lend];
// 		i++;
// 		lend++;
// 	}
	
// 	i = i + 1;
// 	j = 0;
// 	while (src[j] && j < nb)
// 	{
// 		ptr[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	ptr[i] = '\0';
	
// 	return (ptr);
// }


char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	*dest;
	src = (char*)malloc(10 * sizeof(char));
	dest = (char*)malloc(10 * sizeof(char));
	strcpy(src, "khodarahmi");
	strcpy(dest, "amin");
	printf ("res = %s \n", ft_strncat(dest, src, 4));
	return (0);
}
