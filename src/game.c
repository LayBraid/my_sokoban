/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include <ncurses.h>
#include "game.h"
#include "my.h"

void update_map(char **map, int lines)
{
    clear();
    for (int i = 0; i != lines; i++)
        mvprintw(i, 0, map[i]);
    refresh();
}

//TODO ENTER pour stop la game
//TODO SPACE pour relaunch la map et recommencer au début
//TODO déplacements

void input_manager(sokoban_t *skb, int input)
{
    if (input == 10)
        skb->status = 1;
}

void launch_game(sokoban_t *skb)
{
    initscr();
    keypad(stdscr, TRUE);
    while (skb->status == 0) {
        update_map(skb->map, skb->lines);
        input_manager(skb, getch());
    }
    endwin();
}
