/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/

#include "include/fridge.h"

int main(int ac, char **av)
{
    fridge *cool = NULL;
    check_input(ac, av);
    cool = init_fridge();

    run_fridge(cool);
    save_fridge(cool);
    free_fridge(cool);
    return 0;
}
