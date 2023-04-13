/*
** EPITECH PROJECT, 2023
** win_loose.c
** File description:
** wining and loosing conditions
*/
#include "sokoban.h"
#include "struct.h"

void loose_cond (int y, int x, var_t val)
{
    if (val.map[y][x] == 'X') {
        if (((val.map[y][x + 1] == '#' && val.map[y + 1][x] == '#') ||
            (val.map[y][x - 1] == '#' && val.map[y - 1][x] == '#') ||
            (val.map[y + 1][x] == '#' && val.map[y][x - 1] == '#') ||
            (val.map[y - 1][x] == '#' && val.map[y][x + 1] == '#')) &&
            val.map2[y][x] != 'O') {
                endwin();
                exit(1);
            }
    }
}

void loose_cond_check (var_t val)
{
    int i = 0;
    int j = 0;

    while (i < val.lin) {
        j = 0;
        while (val.map2[i][j] != '\0') {
            loose_cond(i, j, val);
            j++;
        }
        i++;
    }
}
