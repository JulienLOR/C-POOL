/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** Display the lowercase alphabet in ascendind order, on a single line.
*/

#include <unistd.h>

int my_print_alpha(void)
{
    char cpt;
    
    for(cpt = 'a'; cpt <= 'z'; cpt++)
    {
        my_putchar(cpt);
    }
    my_putchar('\n');
}
