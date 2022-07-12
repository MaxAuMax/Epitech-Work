/*
** EPITECH PROJECT, 2021
** MY_PUTSTR_UPCASE_S
** File description:
** Putstr for %S
*/

#include "../includes/my.h"

void my_putstr_upcase_s(char const *str)
{
    for (int itr = 0; str[itr] != '\0'; itr++) {
        if (str[itr] >= 32 && str[itr] < 127)
            my_putchar(str[itr]);
        if (str[itr] < 8) {
            my_putstr("\\00");
            my_putstr(my_convert_base(str[itr], 8));
        }
        if (str[itr] >= 8 && str[itr] < 32) {
            my_putstr("\\0");
            my_putstr(my_convert_base(str[itr], 8));
        }
        if (str[itr] >= 127) {
            my_putchar('\\');
            my_putstr(my_convert_base(str[itr], 8));
        }
    }
}
