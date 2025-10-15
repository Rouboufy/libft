#include "libft.h"

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = ft_strlen(src);
    
    if (dstsize == 0)
        return (src_len);
    while (src[i] != '\0' && i < dstsize - 1){ 
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return(src_len);
}
