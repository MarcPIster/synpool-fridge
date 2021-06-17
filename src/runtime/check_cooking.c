/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

int check_pizza(fridge *cool)
{
    int tomato = 5;
    int dough = 1;
    int onion = 3;
    int olive = 8;
    int peppers = 8;
    int ham = 4;
    int cheese = 3;

    if (cool->food[0]->stock >= tomato && cool->food[1]->stock >= dough \
    && cool->food[2]->stock >= onion && cool->food[4]->stock >= olive \
    && cool->food[5]->stock >= peppers && cool->food[6]->stock >= ham \
    && cool->food[7]->stock >= cheese)
        return 1;
    print_not_enough_pizza(cool);
    return 0;
}

void cook_pizza(fridge *cool)
{
    int tomato = 5;
    int dough = 1;
    int onion = 3;
    int olive = 8;
    int peppers = 8;
    int ham = 4;
    int cheese = 3;

    cool->food[0]->stock -= tomato;
    cool->food[1]->stock -= dough;
    cool->food[2]->stock -= onion;
    cool->food[4]->stock -= olive;
    cool->food[5]->stock -= peppers;
    cool->food[6]->stock -= ham;
    cool->food[7]->stock -= cheese;
}

