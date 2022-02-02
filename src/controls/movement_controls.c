/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "controls.h"

void up_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y - 1][skb->pos->x] == ' ') {
        skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y - 1][skb->pos->x] = 'P';
        skb->pos->y--;
    }
}

void down_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y + 1][skb->pos->x] == ' ') {
        skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y + 1][skb->pos->x] = 'P';
        skb->pos->y++;
    }
}

void left_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y][skb->pos->x - 1] == ' ') {
        skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y][skb->pos->x - 1] = 'P';
        skb->pos->x--;
    }
}

void right_movement(sokoban_t *skb)
{
    if (skb->map[skb->pos->y][skb->pos->x + 1] == ' ') {
        skb->map[skb->pos->y][skb->pos->x] = ' ';
        skb->map[skb->pos->y][skb->pos->x + 1] = 'P';
        skb->pos->x++;
    }
}