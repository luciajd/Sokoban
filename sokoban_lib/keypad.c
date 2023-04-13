/*
** EPITECH PROJECT, 2022
** keypad.c
** File description:
** using keys to move P
*/

#include "sokoban.h"
#include "struct.h"


var_t key_movement(var_t val, int press)
{
    if (press == KEY_LEFT) {
        val = moving_left(val);
    }
    if (press == KEY_RIGHT) {
        val = moving_right(val);
    }
    if (press == KEY_UP) {
        val = moving_up(val);
    }
    if (press == KEY_DOWN) {
        val = moving_down(val);
    }
    return (val);
}
