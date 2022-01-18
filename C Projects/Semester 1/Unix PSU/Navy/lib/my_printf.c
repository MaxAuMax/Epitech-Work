/*
** EPITECH PROJECT, 2021
** MY_PRINTF
** File description:
** Function that reproduces C's library printf
*/

#include "../includes/my.h"

void (*check_flag[])(va_list list) = {my_printf_flag_b, my_printf_flag_c,
    my_printf_flag_d, my_printf_flag_i, my_printf_flag_o,
    my_printf_flag_s, my_printf_flag_s_up, my_printf_flag_u,
    my_printf_flag_x_low, my_printf_flag_x, my_printf_flag_percent};

void my_printf(char *str, ...)
{
    va_list list;
    int index;
    char *flags = "bcdiosSuxX%";

    va_start(list, str);
    for (int itr = 0; str[itr] != '\0'; itr++) {
        if (str[itr] != '%')
            my_putchar(str[itr]);
        else {
            itr++;
            char flag = str[itr];
            for (index = 0; flags[index] != '\0'
                && flag != flags[index]; index++);
            check_flag[index](list);
        }
    }
    va_end(list);
}
