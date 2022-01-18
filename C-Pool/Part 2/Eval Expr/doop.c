/*
** EPITECH PROJECT, 2021
** doop
** File description:
** ..
*/

#include "include/my.h"

int doop(int left, int right, char op)
{
    int res = 0;

    if (op == '+')
        res = left + right;
    else if (op == '-')
        res = left - right;
    else
        res = doop2(left, right, op);
    return (res);
}

int doop2(int left, int right, char op)
{
    int res = 0;

    if (op == '*')
        res = left * right;
    else if (op == '/')
        res = left / right;
    else
        res = left % right;
    return (res);
}