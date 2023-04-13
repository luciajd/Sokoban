/*
** EPITECH PROJECT, 2022
** sokoban_h_flag.c
** File description:
** definition sokoban program
*/
#include "sokoban.h"

int sokoban_h_flag (void)
{
    my_putstr("\033[0;35m");
    my_putstr("USAGE\n");
    my_putstr("\033[0m");
    my_putstr("\033[0;36m");
    my_putstr("      ./my_sokoban map\n");
    my_putstr("\033[0m");
    my_putstr("\033[0;35m");
    my_putstr("DESCRIPTION\n");
    my_putstr("\033[0m");
    my_putstr("\033[0;36m");
    my_putstr("     map file representing the warehouse map, ");
    my_putstr("containing '#' for walls,\n");
    my_putstr("         'P' for the player, 'X' for boxes and ");
    my_putstr("'O' for storage locations.\n");
    my_putstr("\033[0m");
    return (0);
}
