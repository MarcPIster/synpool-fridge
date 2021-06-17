/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void print_not_enough_pasta(const fridge *cool)
{
    int tomato = 5;
    int pasta = 2;
    int olive = 6;
    int ham = 4;
    int cheese = 3;

    printf("'make pasta': ");
    if (cool->food[0]->stock < tomato)
        printf("not enough tomato; ");
    if (cool->food[3]->stock < pasta)
        printf("not enough pasta; ");
    if (cool->food[4]->stock < olive)
        printf("not enough olives; ");
    if (cool->food[6]->stock < ham)
        printf("not enough ham; ");
    if (cool->food[7]->stock < cheese)
        printf("not enough cheese;");
    printf("\n");
}

void helper(const fridge *cool, int peppers, int ham, int cheese)
{
    if (cool->food[5]->stock < peppers)
        printf("not enough pepper; ");
    if (cool->food[6]->stock < ham)
        printf("not enough ham; ");
    if (cool->food[7]->stock < cheese)
        printf("not enough cheese;");
}

void print_not_enough_pizza(const fridge *cool)
{
    int tomato = 5;
    int dough = 1;
    int onion = 3;
    int olive = 8;
    int peppers = 8;
    int ham = 4;
    int cheese = 3;

    printf("'make pizza': ");
    if (cool->food[0]->stock < tomato)
        printf("not enough tomato; ");
    if (cool->food[1]->stock < dough)
        printf("not enough dough; ");
    if (cool->food[2]->stock < onion)
        printf("not enough onions; ");
    if (cool->food[4]->stock < olive)
        printf("not enough olives; ");
    helper(cool, peppers, ham, cheese);
    printf("\n");
}

void cook_pasta(fridge *cool)
{
    int tomato = 5;
    int pasta = 2;
    int olive = 6;
    int ham = 4;
    int cheese = 3;

    cool->food[0]->stock -= tomato;
    cool->food[3]->stock -= pasta;
    cool->food[4]->stock -= olive;
    cool->food[6]->stock -= ham;
    cool->food[7]->stock -= cheese;
}

int check_pasta(fridge *cool)
{
    int tomato = 5;
    int pasta = 2;
    int olive = 6;
    int ham = 4;
    int cheese = 3;

    if (cool->food[0]->stock >= tomato && cool->food[4]->stock >= olive \
    && cool->food[6]->stock >= ham && cool->food[3]->stock >= pasta \
    && cool->food[7]->stock >= cheese)
        return 1;
    print_not_enough_pasta(cool);
    return 0;
}