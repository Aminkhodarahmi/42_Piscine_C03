
// #include <stdio.h>

// unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
// {

// }

#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This isooooopopopiohuigyjfghkjl ";
    char last[] = "aminpppppppp";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    // puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
