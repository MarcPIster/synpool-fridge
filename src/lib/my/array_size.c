/*
** EPITECH PROJECT, 2021
** is_num.c
** File description:
** .
*/

int array_size(char **array)
{
    int len = 0;

    for (len = 0; array[len]; len++);
    return len;
}