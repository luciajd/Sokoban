/*
** EPITECH PROJECT, 2022
** reading_map.c
** File description:
** functions used for reading the map
*/

#include "sokoban.h"
#include "struct.h"

//checking for columns
int columns (var_t val, int pos)
{
    int col = 0;

    for (col; val.buffer[pos] != '\n'; pos++) {
        col++;
    }
    return (col);
}

//checking for lines
var_t lines (var_t val)
{
    val.lin = 0;
    int i = 0;

    while (val.buffer[i] != '\0') {
        if (val.buffer[i] == '\0' || val.buffer[i] == '\n') {
            val.lin++;
        }
        i++;
    }
    return (val);
}

char *open_map (char const *filepath, var_t val)
{
    struct stat sb;
    val.fd = open(filepath, O_RDONLY);
    if (val.fd == -1)
        exit(84);

    stat(filepath, &sb);
    val.buffer = malloc(sb.st_size + 1);
    val.rd = read(val.fd, val.buffer, sb.st_size);
    val.buffer[val.rd] = '\0';
    if (val.size == -1 && val.rd == -1)
        exit(84);
    close(val.rd);
    return (val.buffer);
}

//displaying the map and saving map2 for gameplay
var_t display_map (char const *filepath, var_t val)
{
    val.buffer = open_map(filepath, val);
    val = lines(val);
    int pos = 0;
    int col = 0;

    val.map = malloc(sizeof(char *) * val.lin);
    val.map2 = malloc(sizeof(char *) * val.lin);
    for (int y = 0; y < val.lin; y++) {
        col = columns(val, pos);
        val.map[y] = malloc(sizeof(char *) * col + 1);
        val.map2[y] = malloc(sizeof(char *) * col + 1);
        for (int x = 0; x < col; x++) {
            val.map[y][x] = val.buffer[pos];
            val.map2[y][x] = val.buffer[pos];
            pos++;
        }
        pos++;
    }
    return (val);
}
