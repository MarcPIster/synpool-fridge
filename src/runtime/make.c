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

    printf("'make pizza': ");
    if (cool->food[0]->stock < tomato)
        printf("not enough tomato; ");
    if (cool->food[1]->stock < dough)
        printf("not enough dough; ");
    if (cool->food[2]->stock < onion)
        printf("not enough onions; ");
    if (cool->food[4]->stock < olive)
        printf("not enough olives; ");
    if (cool->food[5]->stock < peppers)
        printf("not enough pepper; ");
    if (cool->food[6]->stock < ham)
        printf("not enough ham; ");
    if (cool->food[7]->stock < cheese)
        printf("not enough cheese;");
    printf("\n");
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
    return 0;

}

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