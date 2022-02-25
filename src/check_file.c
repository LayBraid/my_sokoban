/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

int sanity_check(char *path)
{
    char *buffer = get_in_buffer(path);

    for (int i = 0; buffer[i] != '\0'; i++)
        if (!my_str_contains_c(buffer[i], " \n#XOP"))
            return 84;
    return 1;
}
