char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *final;

    if (s)
    {
        if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
            return (ft_strdup(""));
        i = 0;
        while (i < len && s[i + start] != '\0')
            i++;
        final = (char *) malloc((sizeof(char) * i) + 1);
        if (!(final))
            return (NULL);
        j = 0;
        while (j < 0)
        {
            final[j] = s[start + j];
            j++;
        }
        final[j] = '\0';
        return(final);
    }
    return(NULL);
}