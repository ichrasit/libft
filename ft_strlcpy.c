size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t counter;

    counter = 0;
    if (size > 0)
    {
        while((size - 1) > counter && src[counter])
        {
            dst[counter] = src[counter];
            counter++;
        }
        dst[counter] = '\0';
    }
    while (src[counter])
        counter++;
    return (counter);
}