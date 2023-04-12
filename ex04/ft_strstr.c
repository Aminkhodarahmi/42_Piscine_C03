#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (to_find[j] == '\0')
	{
		return(str);
	}
	while (str[i])
	{
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		i++;
	}
	return (0);
}


int main(void)
{
	char str[20] = "Hello, how are you?";
	char searchString[10] = "Hello";
	printf ("res = %s \n", ft_strstr(str, searchString));
	return (0);
}





// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//    const char str[20] = "Hello, how are you?";
//    const char searchString[10] = "a";
//    char *result;

//    /* This function returns the pointer of the first occurrence
// 	* of the given string (i.e. searchString) 
// 	*/ 
//    result = strstr(str, searchString);
//    printf("The substring starting from the given string: %s\n", result);
//    return 0;
// }