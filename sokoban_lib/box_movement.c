/*
** EPITECH PROJECT, 2022
** box_movement.c
** File description:
** function to move de X
*/
#include "sokoban.h"
#include "struct.h"

var_t box_left (var_t val)
{
    if (val.map[val.player_posy][val.player_posx - 2] == 'X')
        return (val);
    else if (val.map[val.player_posy][val.player_posx - 2] == '#')
        return (val);
    else {
        val.map[val.player_posy][val.player_posx - 1] = 'P';
        val.map[val.player_posy][val.player_posx - 2] = 'X';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posx--;
    }
    return (val);
}

var_t box_right (var_t val)
{
    if (val.map[val.player_posy][val.player_posx + 2] == 'X')
        return (val);
    else if (val.map[val.player_posy][val.player_posx + 2] == '#')
        return (val);
    else {
        val.map[val.player_posy][val.player_posx + 2] = 'X';
        val.map[val.player_posy][val.player_posx + 1] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posx++;
    }
    return (val);
}

var_t box_up (var_t val)
{
    if (val.map[val.player_posy - 2][val.player_posy] == 'X')
        return (val);
    else if (val.map[val.player_posy - 2][val.player_posx] == '#')
        return (val);
    else {
        val.map[val.player_posy - 2][val.player_posx] = 'X';
        val.map[val.player_posy - 1][val.player_posx] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posy--;
    }
    return (val);
}

var_t box_down (var_t val)
{
    if (val.map[val.player_posy + 2][val.player_posx] == 'X')
        return (val);
    else if (val.map[val.player_posy + 2][val.player_posy] == '#')
        return (val);
    else {
        val.map[val.player_posy + 2][val.player_posx] = 'X';
        val.map[val.player_posy + 1][val.player_posx] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posy++;
    }
    return (val);
}
