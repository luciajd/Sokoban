/*
** EPITECH PROJECT, 2022
** sub_main.c
** File description:
** calling functions used in main
*/

#include "sokoban.h"
#include "struct.h"

int sub_main (char const *filepath)
{
    var_t val = display_map(filepath, val);
    val = look_for_player(val);

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    clear();
    refresh();
    while (1) {
        refresh();
        for (int i = 0; i < val.lin; i++)
            mvprintw(i, 0, val.map[i]);
        move(val.player_posy, val.player_posx);
        val = gameplay(val);
    }
}
