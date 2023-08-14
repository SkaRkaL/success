#include<stdlib.h>
#include<stdio.h>
char * ft_itoa(int nbr)

{
    int n =nbr;
    int len =0;
    char *t;
    if (nbr<0)
        len++;
    while (nbr)
    {
        len++;
        nbr=nbr/10;
    }
    t=malloc (len *sizeof(char));
    if (!t)
        return (NULL);
    t[len]='\0';
    if (n==0)
    {
        t[0]='0';
        return (t);
    }
    if (n<0)
    {
        t[0]='-';
        n=-n;
    }
    while (n)
    {
        t[--len]=n%10+'0';
        n=n/10;
    }
    return(t);
}
