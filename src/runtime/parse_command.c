/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void print_invalid(char **array)
{
    printf("'");
    for (int x = 0; array[x] != NULL; x++) {
        printf("%s", array[x]);
        if (array[x+1] != NULL)
            printf(" ");
    }
    printf("': Invalid operation\n");
}

void parse_command(char *command, fridge *cool)
{
    char **array = my_str_to_word_array_line(command, ' ');

    if (strcmp(array[0], "addToFridge") == 0) {
        if (addtofridge(array, cool) == -1)
            print_invalid(array);
    }

}