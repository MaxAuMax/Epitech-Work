/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_S
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_s(va_list list)
{
    my_putstr(va_arg(list, char *));
}
