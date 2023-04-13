/*
** EPITECH PROJECT, 2023
** error_handling.c
** File description:
** function that handle errors
*/

#include "sokoban.h"
#include "struct.h"

int error_handling (var_t val)
{
    int i = 0;
    int j = 0;

    while (i < val.lin) {
        j = 0;
        while (val.map2[j][i] != '\0') {
            check_map (i, j, val);
            j++;
        }
        i++;
    }
}

int check_map (int y, int x, var_t val)
{
    if (val.map2[y][x] != '#' && val.map2[y][x] != 'P' &&
        val.map2[y][x] != ' ' && val.map2[y][x] != 'O' &&
        val.map2[y][x] != '\n' && val.map2[y][x] != '\0')
        exit (84);
    return (0);
}
