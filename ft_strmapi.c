char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int i;

    if (!s)
        return (NULL);
    str = (char *)malloc(ct_strlen(s) + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}