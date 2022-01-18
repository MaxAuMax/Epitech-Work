/*
** EPITECH PROJECT, 2021
** MY_PRINTF_FLAG_C
** File description:
** Function
*/

#include "../includes/my.h"

void my_printf_flag_c(va_list list)
{
    my_putchar(va_arg(list, int));
}
