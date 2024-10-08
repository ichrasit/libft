void    *ft_memmove(void *dst, const void *src, size_t n)
{
    if (!dst && !src)
        return (NULL);
    if (dst < src)
        ft_memcpy(dst, src, n);
    else if (dst > src)
    {
        while (n--)
        {
            *((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
        }
        return (dst);
        
    }

}