/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void free_fridge(fridge *cool)
{
    for (int x = 0; cool->food[x]; x++) {
        free(cool->food[x]->name);
        cool->food[x]->name = NULL;
        free(cool->food[x]);
    }
    free(cool->food);
    free(cool);
}