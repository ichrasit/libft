int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *s1_uc;
    const unsigned char *s2_uc;
    size_t index;

    index = 0;
    s1_uc = (const unsigned char *)s1;
    s2_uc = (const unsigned char *)s2;
    while (index < n)
    {
        if (s1_uc[index] != s2_uc[index])
            return (s1_uc[index] - s2_uc[index]);
        index++;
    }
    return (0);
}