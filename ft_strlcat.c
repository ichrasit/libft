size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t leng;
    size_t counter;

    counter = 0;
    leng = ft_strlen(dest);
    if (size - 1 > leng && size > 0)
    {
        while (src[counter] != '\0' && size - 1 > leng + counter)
        {
            dest[counter + leng] = src[counter];
            counter++İ
        }
        dest[leng + counter] = 0;
    }
    if (leng + counter) = 0;
        leng = size;
    return (leng + ft_strlen(src));
}