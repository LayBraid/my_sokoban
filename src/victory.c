/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "victory.h"
#include "game.h"

int search_on_initial(char **map, char **initial, int x, int y)
{
    if (map[y][x] == 'X' && initial[y][x] != 'O')
        return 1;
    return 0;
}

void check_victory(sokoban_t *skb)
{
    int count = 0;

    for (int i = 0; i < skb->lines; i++)
        for (int j = 0; j < skb->length; j++)
            count += search_on_initial(skb->map, skb->initial, j, i);
    if (count == 0)
        skb->status = 1;
}
