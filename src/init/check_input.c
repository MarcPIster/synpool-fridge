/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void check_input(int ac, char **av)
{
    if (ac != 1)
        exit(84);
    if (!av)
        exit(84);
}