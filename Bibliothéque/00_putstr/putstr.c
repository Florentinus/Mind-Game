#include <unistd.h>
#include <stdio.h>

void    aff_putchar(int  c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i=0;
    while (str[i] != '\0')
    {
        aff_putchar(str[i]);
        i++;
    }
}
