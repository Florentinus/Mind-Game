#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int nb;
    int ng;

    i=0;
    nb=0;
    ng=0;
    if (str[i] == '-')
        ng+=1;
    while (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb=nb*10;
        nb+=(str[i] - '0');
        i++;
    }
    if (ng == 1)
        return(-nb);
    return(nb);
}
