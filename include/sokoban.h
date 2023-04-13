/*
** EPITECH PROJECT, 2022
** CPOOL_MY_H
** File description:
** prototypes of all the functions in libmy.a
*/
#include "struct.h"

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <ncurses.h>
    #include <string.h>

    int sokoban_h_flag (void);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int sub_open_main(char const *filepath, var_t *val);
    char *open_map(char const *filepath, var_t val);
    char *read_map(int rd);
    var_t display_map (char const *filepath, var_t val);
    int columns (var_t val, int pos);
    var_t lines (var_t val);
    var_t check_player_letter (var_t val, int y, int x);
    var_t look_for_player (var_t val);
    var_t moving_left (var_t val);
    var_t moving_right (var_t val);
    var_t moving_up (var_t val);
    var_t moving_down (var_t val);
    var_t box_left (var_t val);
    var_t box_right (var_t val);
    var_t box_up (var_t val);
    var_t box_down (var_t val);
    var_t key_movement(var_t val, int press);
    int sub_main (char const *filepath);
    var_t gameplay (var_t val);
    void map_check(var_t val);
    int check_tile(int y, int x, var_t val);
    int count_case_number(int y, int x, var_t val);
    int count_player(int y, int x, var_t val);
    void loose_cond (int y, int x, var_t val);
    void loose_cond_check (var_t val);
    var_t reset_map (int y, int x, var_t val);
    var_t reset_map_check (var_t val);
    int error_handling (var_t val);
    int check_map (int y, int x, var_t val);

#endif
