/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** give string out
*/

#include "../library.h"

char *my_revstr(char *str)
{
    int str_len = my_strlen(str);
    char *output = str;
    char temp = 0;

    for (int i = 0; i < str_len / 2; i++) {
        temp = output[i];
        output[i] = output[str_len - i - 1];
        output[str_len - i - 1] = temp;
    }
    output[str_len] = '\0';
    return output;
}