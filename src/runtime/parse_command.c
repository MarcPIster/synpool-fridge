/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void parse_command(char *command, fridge *cool)
{
    char **array = my_str_to_word_array_line(command, ' ');

    if (strcmp(array[0], "addToFridge") == 0) {
        if (addtofridge(array, cool) == -1)
            print_invalid(array);
    }
    if (strcmp(array[0], "disp") == 0)
        if(display_fridge(array, cool) == -1)
            print_invalid(array);
}