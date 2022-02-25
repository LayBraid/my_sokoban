/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#include "my.h"
#include "check_file.h"
#include "sokoban.h"

int print_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t   ./my_sokoban map\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t   map\tfile representing the warehouse map, containing '#' ");
    my_putstr("for walls, \n\t\t'P' for the player, ");
    my_putstr("X' for boxes and 'O' for storage locations.\n");
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    if (!my_strcmp(av[1], "-h"))
        return print_help();
    if (sanity_check(av[1]) != 1)
        return 84;
    return my_sokoban(av[1]);
}
