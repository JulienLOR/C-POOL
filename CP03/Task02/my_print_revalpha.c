/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** Display the lowercase alphabet in descendind order, on a single line.
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    char cpt;
    
    for(cpt = 'z'; cpt >= 'a'; cpt--)
    {
        my_putchar(cpt);
    }
    my_putchar('\n');
}
