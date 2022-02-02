/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_SOKOBAN_CONTROLS_H
    #define MY_SOKOBAN_CONTROLS_H

    #include "struct.h"
    #include <curses.h>

    #define NB_CONTROLS 6
    #define SPACE 32
    #define ENTER 10

void init_controls(sokoban_t *skb);

void quit_game(sokoban_t *skb);

void reset_map(sokoban_t *skb);

#endif
