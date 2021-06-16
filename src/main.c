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
    for (int x = 0; cool->food[x]; x++)
        printf("%s = %i\n", cool->food[x]->name, cool->food[x]->stock);
    return 0;
}
