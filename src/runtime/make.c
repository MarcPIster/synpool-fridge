/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void choose_dinner(char **array, fridge *cool)
{
    if (strcmp(array[1], "pizza") == 0) {
        if (check_pizza(cool) == 1)
            cook_pizza(cool);
    } else
        if (check_pasta(cool) == 1)
            cook_pasta(cool);
}

int make_dinner(char **array, fridge *cool)
{

    if (!array || !cool)
        exit(84);

    if (array_size(array) != 2)
        return -1;
    if (strcmp(array[1], "pizza") != 0 && strcmp(array[1], "pasta") != 0) {
        printf("'%s': meal unknown\n", array[1]);
        return 0;
    }

    choose_dinner(array, cool);
    return 0;
}