#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i]-=32;
        i++;
    }
    return(str);
}

char *ft_strlowcase(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i]+=32;
        i++;
    }
    return(str);
}

char *ft_strcapitalize(char *str)
{
    int i;
    int m;

    i=0;
    ft_strlowcase(str);
    i=0;
    m=0;
    while (str[i] != '\0')
    {
        if (i==0 && (str[0] >= 'a' && str[0] <= 'z'))
            str[0]-=32;
        else if ((str[i] < 'a' || str[i] > 'z') && (str[i] < '0' || str[i] > '9'))
            m=1;
        else if ((str[i] >= '0' && str[i] <= '9'))
            m=0;
        else if ((str[i] >= 'a' && str[i] <= 'z') && m==1)
        {
            str[i]-=32;
            m=0;
        }
        i++;
    }
    return(str);
}

char    *ft_case(char *str, int type)
{
    if (type == 'm')
    {
        return(ft_strupcase(str));
    }
    else if (type == 'l')
    {
        return(ft_strlowcase(str));
    }
    else if (type == 'c')
    {
        return(ft_strcapitalize(str));
    }
    else
        return(0);
}
