/*
** EPITECH PROJECT, 2022
** find_player.c
** File description:
** look for P position
*/

#include "sokoban.h"
#include "struct.h"

var_t check_player_letter (var_t val, int y, int x)
{
    if (val.map[y][x] == 'P') {
        val.player_posx = x;
        val.player_posy = y;
    }
    return (val);
}

var_t look_for_player (var_t val)
{
    val.player_posx = 0;
    val.player_posy = 0;
    int i = 0;
    int j = 0;

    while (i < val.lin) {
        j = 0;
        while (val.map[i][j] != '\0') {
            val = check_player_letter(val, i, j);
            j++;
        }

        i++;
    }
    return (val);
}
