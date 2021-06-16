/*
** EPITECH PROJECT, 2020
** header for lib
** File description:
** lib
*/
#ifndef LIB_LIBRARY_H
#define LIB_LIBRARY_H

#include <stdlib.h>
#include <unistd.h>


int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_strlen(char const *str);
void my_swap(int *a, int *b);
char *my_revstr(char *str);
char *my_strcat(char *str1, char *str2);
int is_num(char *str);
char *read_file(char *filepath);
char **my_str_to_word_array(char *str, char sep);
int array_size(char **array);
char **my_str_to_word_array_line(char *str, char sep);
#endif //LIB_LIBRARY_H
