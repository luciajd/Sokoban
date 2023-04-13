/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** structure used in sokoban
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct var {
        char *buffer;
        char **map;
        char **map2;
        char const *inipath;
        int lin;
        int player_posx;
        int player_posy;
        int win;
        int rd;
        int fd;
        int size;
        int storage_number;
        int case_number;
    } var_t;


#endif /* !STRUCT_H_ */
