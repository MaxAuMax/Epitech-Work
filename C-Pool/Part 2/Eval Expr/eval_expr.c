/*
** EPITECH PROJECT, 2021
** poolday
** File description:
** eval_expr.c
*/

#include "include/my.h"

int mult(char **str)
{
    int nb = parant(str);
    char op;

    while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%') {
        op = (*str)[0];
        (*str)++;
    nb = doop(nb, parant(str), op);
    }
    return (nb);
}

int add(char **str)
{
    int left = parant(str);
    int right;
    char op;

    while ((*str)[0] != 0 && (*str)[0] != ')') {
        op = (*str)[0];
        (*str)++;
        right = ((op == '+' || op == '-') ? mult(str) : parant(str));
        left = doop(left, right, op);
    }
    return (left);
}

int eval_expr(char *str)
{
    if (str[0] == 0)
        return (0);
    return (add(&str));
}
