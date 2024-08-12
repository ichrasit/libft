char    *ft_strdup(const char *s)
{
    char *str;
    size_t leng;
    size_t i;

    leng = ft_strlen(s);
    str = ((char *) malloc(sizeof(char) * leng + 1));
    if (!(str))
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return(str),

}