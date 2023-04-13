/*
** EPITECH PROJECT, 2022
** gameplay.c
** File description:
** keys
*/

#include "sokoban.h"
#include "struct.h"

var_t gameplay (var_t val)
{
    int press = 0;

    press = getch();
    val = key_movement(val, press);
    val = reset_map_check(val);
    loose_cond_check (val);
    return (val);
}
