/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

char *getuserinput(void)
{
    char *line = NULL;
    size_t length = 0;

    while (line == NULL) {
        if (getline(&line, &length, stdin) == -1)
            exit(84);
    }
    return line;
}


void run_fridge(fridge *cool)
{
    char *command = NULL;

    while (TRUE) {
        free(command);
        command = getuserinput();
        if (strcmp(command, "exit\n") == 0)
            break;
        printf("%s", command);
        parse_command(command, cool);
    }
}