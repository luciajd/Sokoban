/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** a function that displays, one-by-one, the characters of a string
*/
#include "sokoban.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    int  i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
