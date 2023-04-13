/*
** EPITECH PROJECT, 2023
** reset.c
** File description:
** re-print O
*/

#include "sokoban.h"
#include "struct.h"

var_t reset_map (int y, int x, var_t val)
{
    if (val.map2[y][x] == 'O' && val.map[y][x] == ' ') {
        val.map[y][x] = val.map2[y][x];
        return (val);
    }
    return (val);
}

var_t reset_map_check (var_t val)
{
    int i = 0;
    int j = 0;
    while (i < val.lin) {
        j = 0;
        while (val.map2[i][j] != '\0') {
            val = reset_map(i, j, val);
            j++;
        }
        i++;
    }
    return (val);
}
