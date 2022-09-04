#include<unistd.h>

void ft_printchar(char p)
{
    write(1, &p, 1);
}

void ft_print_comb(int nb)
{
    int i;
    int aux;
    int sub;

    aux = nb;
    i = 1;

    while (nb > 0)
    {
        nb = nb/10;
        i = i * 10;
    }
    i = i/10;

    while (i >= 1)
    {
        sub = aux / i;
        ft_printchar(sub);
        aux = aux - sub;
    }
    
}

int main()
{
    ft_print_comb(42);
    return 0;
}
