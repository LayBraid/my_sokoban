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

    #define NB_CONTROLS 7
    #define SPACE 32
    #define ENTER 10
    #define ESCAPE 27

void init_controls(sokoban_t *skb);

void quit_game(sokoban_t *skb);

void reset_map(sokoban_t *skb);

void up_movement(sokoban_t *skb);

void down_movement(sokoban_t *skb);

void left_movement(sokoban_t *skb);

void right_movement(sokoban_t *skb);

#endif
