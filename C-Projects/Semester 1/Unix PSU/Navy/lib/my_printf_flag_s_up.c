/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_S_UP
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_s_up(va_list list)
{
    my_putstr_upcase_s(va_arg(list, char *));
}
