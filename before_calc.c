/*
** EPITECH PROJECT, 2020
** before_calc.c
** File description:
** playing with numbers in c
*/

#include <unistd.h>
#include "my.h"

char is_big(char *arv1, char *arv2)
{
    if (my_strlen(*arv1) >= my_strlen(*arv2))
        return (arv1);
    return (arv2);
}

char is_smal(char *arv1, char *arv2)
{
    if (my_strlen(arv1) < my_strlen(arv2))
        return (arv1);
    return (arv2);
}

int separate_before(char *str, char x)
{
    char *tab;

    while (*str != '\0') {
        while (*str != '*' || *str != '/') {
            if (*str >= '0' && *str <= '9')
                my_strcpy(*str, *tab);
            str++;
            tab++;
        }
    }
    return (*tab);
}

int separate_after(char *str, char x)
{
    char *src;
    while (*str != '\0') {
        if (*str >= '0' || *str <= '9')
            my_strcpy(*str, *src);
        str++;
    }

    return (*src);
}

char int_char(char c)
{
    if (c >= '0' && c <= '9')
        return (c - 48);
    return (0);
}