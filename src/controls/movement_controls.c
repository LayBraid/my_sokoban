/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "controls.h"

void reset_position(sokoban_t *skb)
{
    if (skb->initial[skb->pos->y][skb->pos->x] == 'O')
        skb->map[skb->pos->y][skb->pos->x] = 'O';
    else
        skb->map[skb->pos->y][skb->pos->x] = ' ';
}

void up_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y - 1][skb->pos->x] == ' ' || skb->map[skb->pos->y - 1][skb->pos->x] == 'O') {
        if (skb->initial[skb->pos->y][skb->pos->x] == 'O')
            skb->map[skb->pos->y][skb->pos->x] = 'O';
        else
            skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y - 1][skb->pos->x] = 'P';
        skb->pos->y--;
    }
    if (skb->map[skb->pos->y - 1][skb->pos->x] == 'X' && (skb->map[skb->pos->y - 2][skb->pos->x] == ' ' || skb->map[skb->pos->y - 2][skb->pos->x] == 'O')) {
        reset_position(skb);
        skb->map[skb->pos->y - 1][skb->pos->x] = 'P';
        skb->map[skb->pos->y - 2][skb->pos->x] = 'X';
        skb->pos->y--;
    }
}

void down_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y + 1][skb->pos->x] == ' ' || skb->map[skb->pos->y + 1][skb->pos->x] == 'O') {
        if (skb->initial[skb->pos->y][skb->pos->x] == 'O')
            skb->map[skb->pos->y][skb->pos->x] = 'O';
        else
            skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y + 1][skb->pos->x] = 'P';
        skb->pos->y++;
    }
    if (skb->map[skb->pos->y + 1][skb->pos->x] == 'X' && (skb->map[skb->pos->y + 2][skb->pos->x] == ' ' || skb->map[skb->pos->y + 2][skb->pos->x] == 'O')) {
        reset_position(skb);
        skb->map[skb->pos->y + 1][skb->pos->x] = 'P';
        skb->map[skb->pos->y + 2][skb->pos->x] = 'X';
        skb->pos->y++;
    }
}

void left_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y][skb->pos->x - 1] == ' ' || skb->map[skb->pos->y][skb->pos->x - 1] == 'O') {
        if (skb->initial[skb->pos->y][skb->pos->x] == 'O')
            skb->map[skb->pos->y][skb->pos->x] = 'O';
        else
            skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y][skb->pos->x - 1] = 'P';
        skb->pos->x--;
    }
    if (skb->map[skb->pos->y][skb->pos->x - 1] == 'X' && (skb->map[skb->pos->y][skb->pos->x - 2] == ' ' || skb->map[skb->pos->y][skb->pos->x - 2] == 'O')) {
        reset_position(skb);
        skb->map[skb->pos->y][skb->pos->x - 1] = 'P';
        skb->map[skb->pos->y][skb->pos->x - 2] = 'X';
        skb->pos->x--;
    }
}

void right_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y][skb->pos->x + 1] == ' ' || skb->map[skb->pos->y][skb->pos->x + 1] == 'O') {
        if (skb->initial[skb->pos->y][skb->pos->x] == 'O')
            skb->map[skb->pos->y][skb->pos->x] = 'O';
        else
            skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y][skb->pos->x + 1] = 'P';
        skb->pos->x++;
    }
    if (skb->map[skb->pos->y][skb->pos->x + 1] == 'X' && (skb->map[skb->pos->y][skb->pos->x + 2] == ' ' || skb->map[skb->pos->y][skb->pos->x + 2] == 'O')) {
        reset_position(skb);
        skb->map[skb->pos->y][skb->pos->x + 1] = 'P';
        skb->map[skb->pos->y][skb->pos->x + 2] = 'X';
        skb->pos->x++;
    }
}