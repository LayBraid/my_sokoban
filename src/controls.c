/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "controls.h"
#include "my.h"

control_t *setup_control(int input, void (* function)(sokoban_t *skb))
{
    control_t *tmp = malloc(sizeof(control_t));

    tmp->input = input;
    tmp->function = function;
    return tmp;
}

void init_controls(sokoban_t *skb)
{
    skb->controls = malloc(sizeof(control_t *) * NB_CONTROLS);
    skb->controls[0] = setup_control(10, quit_game);
}
