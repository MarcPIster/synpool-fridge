/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

void create_file(char *filepath)
{
    FILE *ptr = fopen(filepath, "w");

    if (!ptr)
        exit(84);
    fclose(ptr);
}

ingredients *create_food(char *name)
{
    int size = my_strlen(name);
    ingredients *output = malloc(sizeof(ingredients));
    output->name = malloc(sizeof(char) * (size + 1));
    strcpy(output->name, name);
    output->name[size] = '\0';
    output->stock = 50;
    return output;
}



ingredients **init_food(void)
{
    ingredients **output = malloc(sizeof(ingredients *) * 9);
    output[0] = create_food("tomato");
    output[1] = create_food("dough");
    output[2] = create_food("onion");
    output[3] = create_food("pasta");
    output[4] = create_food("olive");
    output[5] = create_food("pepper");
    output[6] = create_food("ham");
    output[7] = create_food("cheese");
    output[8] = NULL;
    return output;
}


fridge *init_fridge(void)
{
    fridge *output = malloc(sizeof(fridge));
    char *content = read_file(".save");

    if (!content) {
        create_file(".save");
        output->food = init_food();
        free(content);
        return output;
    }
    output->food = init_food_file(".save");
    free(content);
    return output;
}
