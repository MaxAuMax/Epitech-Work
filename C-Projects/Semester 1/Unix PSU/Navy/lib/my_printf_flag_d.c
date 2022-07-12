/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_D
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_d(va_list list)
{
    my_put_nbr(va_arg(list, int));
}
