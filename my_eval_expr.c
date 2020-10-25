/*
** EPITECH PROJECT, 2020
** my_eval_expr.c
** File description:
** my first eval_expr in c
*/

#include <unistd.h>
#include "include/my.h"

int is_biggest(char *arv1, char *arv2);

int is_smallest(char *arv1, char *arv2);

int separate_before(char *str, char x);

int separate_after(char *str, char x);

int get_unit(int num1, int num2);

int get_retenue(int num1, int num2);

int get_diz(int num1, int num2);

char int_char(char c);

int eval_expr(char *str)
{
    my_putstr("Hello world !\n");

    return (str);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}