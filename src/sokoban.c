/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include <ncurses.h>
#include <unistd.h>
#include "sokoban.h"
#include "my.h"
#include "utils.h"

int my_sokoban(char *path)
{
    sokoban_t *skb = malloc(sizeof(sokoban_t));
    skb->buffer = get_in_buffer(path);
    skb->length = max_length_line(skb->buffer);
    skb->lines = max_line(skb->buffer);
    return (0);
}
