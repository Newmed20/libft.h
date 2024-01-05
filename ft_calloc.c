#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *vd;
    
    vd = (void *)malloc(count * size);
    if(!vd)
        return NULL;
    ft_bzero(vd ,count * size);
    return(vd);
}
