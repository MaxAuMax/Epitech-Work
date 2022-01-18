/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_O
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_o(va_list list)
{
    my_putstr(my_convert_base(va_arg(list, unsigned int), 8));
}
