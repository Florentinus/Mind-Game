char *ft_strncat(char *dest, const char *src, int n)
{
    int i;
    int u;

    i=0;
    while (dest[i] != '\0')
        i++;
    u=0;
    while(src[u] != '\0' && n > 0)
    {
        dest[i]=src[u];
        u++;
        i++;
        n--;
    }
    dest[i]='\0';
    return(dest);
}
