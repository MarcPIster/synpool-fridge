/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void print_invalid(char **array)
{
    printf("'");
    for (int x = 0; array[x] != NULL; x++) {
        printf("%s", array[x]);
        if (array[x+1] != NULL)
            printf(" ");
    }
    printf("': Invalid operation\n");
}

int display_fridge(char **array, fridge *cool)
{
    if (!array || !cool)
        exit(84);

    if (array_size(array) != 2)
        return -1;

    if (strcmp(array[1], "fridge") == 0) {
        for (int x = 0; cool->food[x]; x++)
            printf("%s = %i\n", cool->food[x]->name, cool->food[x]->stock);
    } else
        return -1;
    return 0;
}

void save_fridge(fridge *cool)
{
    FILE *ptr = fopen(".save", "wb");

    for (int x = 0; cool->food[x]; x++)
        fprintf(ptr, "%s = %i\n", cool->food[x]->name, cool->food[x]->stock);
    fclose(ptr);

}