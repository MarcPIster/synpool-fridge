/*
** EPITECH PROJECT, 2020
** header for duostumper
** File description:
** mybsq
*/

#ifndef BSQ_LIBRARY_H
#define BSQ_LIBRARY_H

#include "../lib/library.h"
#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

typedef struct ingredients {
    char *name;
    int stock;

} ingredients;

typedef struct fridge {
    ingredients **food;
} fridge;

fridge *init_fridge(void);
void check_input(int ac, char **av);
ingredients **init_food_file(char *path);

#endif //BSQ_LIBRARY_H