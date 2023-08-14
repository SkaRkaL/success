#include<stdlib.h>


char *ft_strdup(char * str)
{
    int i =0;
    int len =0;
    char *t;
    if (!str)
        return (NULL);
    len =strlen(str);
    t= (char *) malloc (len+1 *sizeof(char));
    if (!t)
        return (NULL);
    while (i<=len)
    {
        t[i]=str[i];
        i++;
    }
    return (t);
}