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
    char *path;
    char *buffer;
    int length;
    int lines;
    char **map;
    pos_t *pos;
    int status;
    struct control_struct **controls;
} sokoban_t;

typedef struct control_struct {
    int input;
    void (* function)(sokoban_t *skb);
} control_t;

#endif
