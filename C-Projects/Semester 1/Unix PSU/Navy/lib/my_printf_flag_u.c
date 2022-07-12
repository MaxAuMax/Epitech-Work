/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_U
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_u(va_list list)
{
    my_unsigned_put_nbr(va_arg(list, int));
}
