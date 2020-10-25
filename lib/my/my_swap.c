/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my lib
*/

void my_swap(int *a, int *b)
{
    int	x = *a;
    *a = *b;
    *b = x;
}