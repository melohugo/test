#include<unistd.h>

void ft_printchar(char p)
{
    write(1, &p, 1);
}

void ft_print_comb()
{
    int ascii, ascii2, ascii3;

    ascii = 48;

    int i;

    i = 0;

    while (i <= 7)
    {
        ascii = ascii + i;
        ascii2 = ascii;
        while (ascii2 <= 57)
        {
            ascii2 = ascii2 + 1;
            ascii3 = ascii2 + 1;
            while (ascii3 <= 57)
            {
                ft_printchar(ascii);
                ft_printchar(ascii2);
                ft_printchar(ascii3);
            } 
        }

        i++;
    }
    
}
