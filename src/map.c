/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "map.h"
#include "my.h"

void init_map(sokoban_t *skb)
{
    int pos[2] = {0};

    skb->map = malloc(sizeof(char *) * skb->lines);
    for (int i = 0; i < skb->lines; i++)
        skb->map[i] = malloc(sizeof(char) * (skb->length + 1));
    for (int i = 0; skb->buffer[i] != '\0'; i++, pos[0]++) {
        if (skb->buffer[i] == '\n') {
            skb->map[pos[1]][pos[0]] = '\0';
            pos[1] ++;
            pos[0] = -1;
            continue;
        }
        if (skb->buffer[i] == 'P') {
            skb->pos->x = pos[0];
            skb->pos->y = pos[1];
        }
        skb->map[pos[1]][pos[0]] = skb->buffer[i];
    }
    skb->map[pos[1]][pos[0]] = '\0';
}
