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
void run_fridge(fridge *cool);
void parse_command(char *command, fridge *cool);
void print_invalid(char **array);
int addtofridge(char **array, fridge *cool);
int display_fridge(char **array, fridge *cool);

#endif //BSQ_LIBRARY_H