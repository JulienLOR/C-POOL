/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_print_comb2
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb2(void) 
{
    int d = 48;
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            int a1 = d + i % 10;
            int a2 = d + i / 10;
            my_putchar(a2);
            my_putchar(a1);
            my_putchar(' ');
            int b1 = d + j % 10;
            int b2 = d + j / 10;
            my_putchar(b2);
            my_putchar(b1);
            if(i != 98 || j != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    my_putchar('\n');
}