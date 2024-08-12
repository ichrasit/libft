char    *ft_strchr(const char *s, int c)
{
    while ((char)c != *s)
    {
        if (*s == 0)
            return (0);
        s++;
    }
    return((char *)s);

}