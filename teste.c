#include<unistd.h>

void ft_printchar(char p)
{
    write(1, &p, 1);
}

void ft_print_comb()
{
    int ascii, ascii2;

    int i, k;

    k = 48;
    i = 48;

    while(k <= 57)
    {
        if(i >= 57)
        {
            k = k + 1;
            i = 48;
        }
        
        ascii = 48;

        while (ascii <= 57)
        {
            ascii2 = 48;
            while (ascii2 <= 57)
            {
                ft_printchar(32);
                ft_printchar(k);
                ft_printchar(i);
                ft_printchar(32);
                ft_printchar(ascii);
                ft_printchar(ascii2);
                ft_printchar(44);
                ascii2 = ascii2 + 1;
            }

            ascii = ascii + 1;

            if(ascii >= 57)
            {
                i = i + 1;
            }
        }
    }
}

int main()
{
    ft_print_comb();
    return 0;
}
