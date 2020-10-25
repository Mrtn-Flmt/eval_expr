/*
** EPITECH PROJECT, 2020
** my_eval_expr.c
** File description:
** my first eval_expr in c
*/

int get_unit(int num1, int num2)
{
    int retenue = 0;
    int unite = ((num1 * num2 + retenue) % 10);

    return (unite);
}

int get_retenue(int num1, int num2)
{
    int retenue = ((num1 * num2) / 10);

    return (retenue);
}

int get_diz(int num1, int num2)
{
    int retenue = get_retenue(num1, num2);

    int dizaine = ((num1 * num2 + retenue) / 10);

    return (dizaine);
}