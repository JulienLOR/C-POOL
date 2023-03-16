/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** Display the number of regular files in the current folder and each of its subfolders
*/

#include <unistd.h>

int my_print_digits(void)
{
    char cpt;
    
    for(cpt = '0'; cpt <= '9'; cpt++)
    {
        my_putchar(cpt);
    }
    my_putchar('\n');
}
