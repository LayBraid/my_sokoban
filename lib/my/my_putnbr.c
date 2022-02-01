/*
** EPITECH PROJECT, 2021
** printf
** File description:
** No file there , just an epitech header example
*/

#include "my.h"

int my_put_nbr(int n)
{
    if (n < 0){
        my_putchar('-');
        n = -n;
    }
    if (n >= 10){
        my_put_nbr(n / 10);
        my_putchar(n % 10 + '0');
    }
    if (n < 10){
        my_putchar(n % 10 + '0');
    }
    return (n);
}
