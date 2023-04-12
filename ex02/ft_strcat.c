
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;
	int		lend;
	int		lens;
	int		lenp;
	int		i;

	lend = 0;
	while (dest[lend])
	{
		lend++;
	}

	lens = 0;
	while (src[lens])
	{
		lens++;
	}

	lenp = lens + lend;
	ptr = (char*)malloc(lenp + 1);

	lens = 0;
	i = 0;
	while (src[lens])
	{
		ptr[i] = src[lens];
		i++;
		lens++;
	}
	lend = 0;
	while (dest[lend])
	{
		ptr[i] = dest[lend];
		i++;
		lend++;
	}
	ptr[i + 1] = '\0';
	
	return (ptr);
}






// char	*ft_strcat(char *dest, char *src)
// {
// 	int	len;
// 	int	i;

// 	len = 0;
// 	while (dest[len] != '\0')
// 	{
// 		len++;
// 	}
	
// 	i = 0;
// 	len = len + 1;
// 	while (src[i] != '\0')
// 	{
// 		dest[len] = src[i];
// 		len++;
// 		i++; 
// 	}
// 	dest[len + 1] = '\0';
// 	return (dest);
// }


// #include <string.h>
// #include <stdlib.h>

int	main(void)
{
	char	src[5] = "amin";
	char	dest[11] = "khodarahmi";

	// src = (char*)malloc(100 * sizeof(char));
	// dest = (char*)malloc(100 * sizeof(char));
	// strcpy(src, "amin ");
	// strcpy(dest, "khodarahmi");
	printf ("res = %s \n", ft_strcat(dest, src));
	return (0);
}
