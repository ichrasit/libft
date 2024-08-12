void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;

    str = s;
    while (n > 0)
    {
        if (*str == (unsigned char) c)
            return ((void *)str);
        n--;
        str++;
    }
    return (NULL);
}