#include<unistd.h>

int main (int ac,char **av)
{
    int start =0;
    int end= 0;
    int i =0;
    int flag;
    if (ac >1)
    {
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
        i++;
        start=i;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
        i++;
        end =i;
        while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
        while (av[1][i])
        {
            while  ((av[1][i] == ' ' && av[1][i+1] == ' ')|| (av[1][i] == '\t' && av[1][i+1] == '\t'))
            i++;
            
            if (av[1][i] == ' ' || av[1][i] == '\t')
             flag =1;
            write (1,&av[1][i],1);
            i++;
        }
        if (flag)
            write (1," ",1);
        i--;
        while (start<end)
        {
            write (1,&av[1][start],1);
            start++;
        }
    }
    write(1,"\n",1);
}
