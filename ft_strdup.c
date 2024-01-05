#include "libft.h"
char *ft_strdup(const char *s1)
{
    int n ;
    int i ;
    char *copy;

    n = ft_strlen(s1) + 1 ;
    copy = malloc(n);
    i = 0;
    if(!copy)
        return(NULL);
    ft_memcpy(copy , s1 , n);
    return(copy);
}