char *ft_strcat(char *dest, const char *src)
{
    int i;
    int u;

    i=0;
    while (dest[i] != '\0')
        i++;
    u=0;
    while(src[u] != '\0')
    {
        dest[i]=src[u];
        u++;
        i++;
    }
    dest[i]='\0';
    return(dest);
}
