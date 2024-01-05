#include "libft.h"

static unsigned int ft_wordcount(const char *str , char c)
{
    unsigned int i;
    unsigned int counter;
    unsigned int flag;

    counter = 0;
    flag = 1;
    i = 0;
 
    while(str && str[i])
    {
        if(str[i] != c && (str[i+1] == c || str[i+1] == '\0') && flag == 1)
        {
            counter++;
            flag = 0;
        }
        else if (str[i] == c && str [i+1] != c  )
            flag = 1;
        i++;
    }
    return counter;
}

static void ft_free(char **str , unsigned int index)
{
    unsigned int    i;
    
    i = 0;
    while(i < index)
    {
        free(str[i]);
        i++;
    }
    free(str);
    str = NULL;
}


static char **ft_fill(char **mysplit , char const *s, char c , unsigned int counter)
{
    unsigned int    i;
    unsigned int    len;
    unsigned int    start;
    unsigned int    index;

    i = 0;
    index = 0;
    while(index < counter)
    {
        len = 0;
        while(s && s[i] == c)
            i++;
    start = i;
    while(s && s[i] != c && s[i])
    {
        len++;
        i++;
    }
    mysplit[index] = ft_substr(s, start, len);
    if(!mysplit[index])
    {
        ft_free(mysplit, index);
        return(NULL);
    }
    index++;
    }
    mysplit[index] = NULL;
    return(mysplit);
}


char **ft_split(char const *s, char c)
{
    char    **mysplit;
    unsigned int    i;
    unsigned int counter;

    i = 0; 
    if(!s)
    return(NULL);
    counter = ft_wordcount(s, c);
    if(!(mysplit = (char **)malloc((counter + 1) * sizeof(char *))))
    return(NULL);
    mysplit = ft_fill(mysplit, s, c, counter);
    return(mysplit);
}
