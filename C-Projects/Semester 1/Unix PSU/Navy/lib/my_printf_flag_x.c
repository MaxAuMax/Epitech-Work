/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_X
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_x(va_list list)
{
    my_putstr(my_convert_base(va_arg(list, unsigned int), 16));
}
