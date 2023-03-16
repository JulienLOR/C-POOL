/*
** EPITECH PROJECT, 2020
**  my_inseg.c  
** File description:
** Display either N ifthe integer passed as parameter is negative, P, if positive or null.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_inseg(int n) 
{    
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
    return(0);
}