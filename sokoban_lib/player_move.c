/*
** EPITECH PROJECT, 2022
** player_move.c
** File description:
** player movement
*/

#include "sokoban.h"
#include "struct.h"

var_t moving_left (var_t val)
{
    if (val.map[val.player_posy][val.player_posx - 1] != '#') {
        if (val.map[val.player_posy][val.player_posx - 1] == 'X')
            val = box_left(val);
        else {
        val.map[val.player_posy][val.player_posx - 1] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posx--;
        }
    }
    return (val);
}

var_t moving_right (var_t val)
{
    if (val.map[val.player_posy][val.player_posx + 1] != '#') {
        if (val.map[val.player_posy][val.player_posx + 1] == 'X')
            val = box_right(val);
        else {
        val.map[val.player_posy][val.player_posx + 1] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posx++;
        }
    }
    return (val);
}

var_t moving_up (var_t val)
{
    if (val.map[val.player_posy - 1][val.player_posx] != '#') {
        if (val.map[val.player_posy - 1][val.player_posx] == 'X')
            val = box_up(val);
        else {
        val.map[val.player_posy - 1][val.player_posx] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posy--;
        }
    }
    return (val);
}

var_t moving_down (var_t val)
{
    if (val.map[val.player_posy + 1][val.player_posx] != '#') {
        if (val.map[val.player_posy + 1][val.player_posx] == 'X')
            val = box_down(val);
        else {
        val.map[val.player_posy + 1][val.player_posx] = 'P';
        val.map[val.player_posy][val.player_posx] = ' ';
        val.player_posy++;
        }
    }
    return (val);
}
