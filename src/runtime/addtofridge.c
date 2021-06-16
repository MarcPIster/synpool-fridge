/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

int addtofridge(char **array, fridge *cool)
{
    int check = 0;
    if (!array || !cool)
        exit(84);

    if (array_size(array) != 3)
        return -1;
    for (int x = 0; cool->food[x]; x++) {
        if (strcmp(array[1], cool->food[x]->name) == 0)
            if (is_num(array[2]) == 1) {
                cool->food[x]->stock += my_getnbr(array[2]);
                check++;
            }
    }
    if (check == 0)
        return -1;
    return 0;
}

