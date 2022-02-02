/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_SOKOBAN_STRUCT_H
    #define MY_SOKOBAN_STRUCT_H

typedef struct position_struct {
    int x;
    int y;
} pos_t;

typedef struct sokoban_struct {
    char *buffer;
    int length;
    int lines;
    char **map;
    pos_t *pos;
    int status;
} sokoban_t;

#endif
