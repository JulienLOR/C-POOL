/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_print_comb
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb(void)
{
    int u;
    int d;
    int c;

    c = '0';

    while (c <= '9')
    {
        d = c + 1;
            while (d <= '9') 
            {
                u = d + 1;
                while (u <= '9') 
                {
                    if (c == '7' && d == '8' && u == '9') 
                    {
                        my_putchar(c);
                        my_putchar(d);
                        my_putchar(u);
                        my_putchar('\n');
                    } else {
                        my_putchar(c);
                        my_putchar(d);
                        my_putchar(u);
                        my_putchar(',');
                        my_putchar(' ');
                    }
                    u = u + 1;
                }
            d = d + 1;
            }
        c = c + 1;
    }
}