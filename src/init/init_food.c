/*
** EPITECH PROJECT, 2020
** fridge
** File description:
** init fridge
*/

#include "../include/fridge.h"

int count_lines(char *file)
{
    int count = 0;

    for (int x = 0; file[x] != '\0'; x++)
        if (file[x] == '\n')
            count++;
    return count;
}

int valid_save(char *line)
{
    char **array = my_str_to_word_array(line, ' ');
    char arr[8][8] =
            { "tomato",
              "dough",
              "onion",
              "pasta",
              "olive",
              "pepper",
              "ham",
              "cheese",
            };
    for (int x = 0; x < 8; x++) {
        if (strcmp(array[0], arr[x]) == 0) {
            free_array(array);
            return 1;
        }
    }
    free_array(array);
    return 0;
}

ingredients *create_food_file(char *line)
{
    ingredients *output = malloc(sizeof(ingredients));
    char **array = my_str_to_word_array(line, ' ');
    int size = 0;

    if (array_size(array) != 3 || valid_save(line) == 0) {
        write(2, "False .save file\n", 17);
        exit(84);
    }
    size = my_strlen(array[0]);
    output->name = malloc(sizeof(char) * size+1);
    strcpy(output->name, array[0]);
    output->name[size] = '\0';
    output->stock = my_getnbr(array[2]);
    free_array(array);
    return output;
}

ingredients **init_food_file(char *path)
{
    ingredients **output = malloc(sizeof(ingredients *) *9);
    char *file = read_file(path);
    int n = count_lines(file);

    char **array = my_str_to_word_array(file, '\n');

    if (n != 8) {
        write(2, "False .save file\n", 17);
        free(file);
        exit(84);
    }
    for (int x = 0; array[x] != NULL; x++)
        output[x] = create_food_file(array[x]);
    output[8] = NULL;
    free(file);
    free_array(array);
    return output;
}