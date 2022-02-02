/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "sokoban.h"
#include "my.h"
#include "utils.h"
#include "map.h"
#include "game.h"
#include "controls.h"

int my_sokoban(char *path)
{
    sokoban_t *skb = malloc(sizeof(sokoban_t));
    skb->path = path;
    skb->buffer = get_in_buffer(skb->path);
    skb->length = max_length_line(skb->buffer);
    skb->lines = max_line(skb->buffer);
    skb->pos = malloc(sizeof(pos_t));
    skb->status = -1;

    init_map(skb);
    init_controls(skb);
    launch_game(skb);
    return (0);
}
