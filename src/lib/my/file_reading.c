/*
** EPITECH PROJECT, 2021
** file_reading.c
** File description:
** .
*/

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

char *read_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = NULL;
    struct stat sb;

    if (!fd)
        exit(84);
    if (fd < 0)
        return NULL;
    stat(filepath, &sb);
    if (sb.st_size == 0)
        return NULL;
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (!buffer)
        exit(84);
    memset(buffer, 0, sizeof(char) * (sb.st_size + 1));
    read(fd, buffer, sb.st_size);
    close(fd);
    return buffer;
}
