size_t  ft_strlen(const char *s)
{
    int len;
    int i;

    i = 0;
    len = 0;
    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return(len);
}