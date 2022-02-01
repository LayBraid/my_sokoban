/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No file there , just an epitech header example
*/

#include <sys/stat.h>
#include <unistd.h>
#include <sys/fcntl.h>
#include "my.h"
#include "utils.h"

char *get_in_buffer(char *path)
{
    int fd;
    char *buffer;
    struct stat buf;

    stat(path, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    fd = open(path, O_RDONLY);
    if (fd == -1)
        buffer = "error";
    read(fd, buffer, buf.st_size);
    buffer[buf.st_size] = '\0';
    close(fd);
    return buffer;
}

int max_length_line(const char *buffer)
{
    int max = 0;
    int tmp = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n' || buffer[i] == '\0') {
            max = (tmp > max) ? tmp : max;
            tmp = -1;
        }
        tmp++;
    }
    return max;
}
