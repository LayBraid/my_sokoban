/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include <stdlib.h>
#include "game.h"
#include "controls.h"
#include "victory.h"
#include "fail.h"

void update_map(char **map, int lines)
{
    clear();
    for (int i = 0; i != lines; i++)
        mvprintw(i, 0, map[i]);
    refresh();
}

void input_manager(sokoban_t *skb, int input)
{
    for (int i = 0; i < NB_CONTROLS; i++)
        if (input == skb->controls[i]->input) {
            skb->controls[i]->function(skb);
            break;
        }
}

void launch_game(sokoban_t *skb)
{
    initscr();
    keypad(stdscr, TRUE);
    while (skb->status == -1) {
        update_map(skb->map, skb->lines);
        input_manager(skb, getch());
        check_victory(skb);
        check_fail(skb);
    }
    endwin();
}
