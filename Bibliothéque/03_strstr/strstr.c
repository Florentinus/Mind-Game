char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int u;
    int l;

    i=0;
    u=0;
    l=0;
    while (needle[l] != '\0')
        l++;
    while(haystack[i])
    {
        while (haystack[i+u] == needle[u])
        {
            if (u==l-1)
                return ((char *)haystack + i);
            u++;
        }
        u=0;
        i++;
    }
    return(0);
}
