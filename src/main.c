/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main sokoban
*/

#include "sokoban.h"
#include "struct.h"

int main (int ac, char **av)
{
    if (ac > 2 || ac < 2)
        return (84);

    if (av[1][0] == '-' && av[1][1] == 'h')
        sokoban_h_flag();
    else
        sub_main(av[1]);
    return (0);
}
