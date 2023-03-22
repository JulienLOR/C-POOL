/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_put_nbr
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void is_neg(int *nb)
{
  if (*nb < 0)
    {
      my_putchar('-');
      *nb = *nb * -1;
    }
}

int my_put_nbr(int nb) 
{   
    int	tmp;

    tmp = 1;
    
    is_neg(&nb);
    while (nb / tmp > 9) {
        tmp = tmp * 10;
    }
    while (tmp >= 1)
        {
            my_putchar((nb / tmp) % 10 + 48);
            tmp = tmp / 10;
        }
    my_putchar('\n');
    return 0;
}