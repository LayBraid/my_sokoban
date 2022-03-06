/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "fail.h"

int nb_box(sokoban_t *skb)
{
    int box = 0;

    for (int i = 0; i < skb->lines; i++)
        for (int j = 0; j < skb->length; j++)
            box += (skb->initial[i][j] == 'X') ? 1 : 0;
    return box;
}

int is_blocked(sokoban_t *skb, int x, int y)
{
    if (skb->map[x][y] == 'X') {
        if (skb->map[x - 1][y] == '#' && skb->map[x][y - 1] == '#')
            return 1;
        if (skb->map[x + 1][y] == '#' && skb->map[x][y - 1] == '#')
            return 1;
        if (skb->map[x - 1][y] == '#' && skb->map[x][y + 1] == '#')
            return 1;
        if (skb->map[x + 1][y] == '#' && skb->map[x][y + 1] == '#')
            return 1;
    }
    return 0;
}

void check_fail(sokoban_t *skb)
{
    int box = nb_box(skb);
    int counter = 0;

    if (skb->status == 1)
        return;
    for (int i = 0; i < skb->lines; i++)
        for (int j = 0; j < skb->length; j++)
            counter += is_blocked(skb, i, j);
    if (counter == box)
        skb->status = 2;
}
