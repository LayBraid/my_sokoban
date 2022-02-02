/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "controls.h"
#include "map.h"

void quit_game(sokoban_t *skb)
{
    skb->status = 1;
}

void reset_map(sokoban_t *skb)
{
    init_map(skb);
}
