/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_LOW_X
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_x_low(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);
    my_putstr(my_strlowcase(my_convert_base(nb, 16)));
}
