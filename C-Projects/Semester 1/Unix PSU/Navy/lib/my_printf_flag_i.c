/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_I
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_i(va_list list)
{
    my_put_nbr(va_arg(list, int));
}
