/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** tests_my_printf.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("Hello %s", "World");
    cr_assert_stdout_eq_str("Hello World");
}

Test(my_printf , int_and_string , .init = redirect_all_std)
{
    my_printf("Hello %s i am %d %s", "William", 46, "years old");
    cr_assert_stdout_eq_str("Hello William i am 46 years old");
}

Test(my_printf , hexa_octal , .init = redirect_all_std)
{
    my_printf("Hexa 412 %x et Octal 412 %o", 412, 412);
    cr_assert_stdout_eq_str("Hexa 412 19c et Octal 412 634");
}

Test(my_printf , mix , .init = redirect_all_std)
{
    my_printf("Bin 10 %b + %s. %s %x et d'%s %X", 10,
        "la pool", "Hx 50", 50, "Octal 55", 55);
    cr_assert_stdout_eq_str("Bin 10 1010 + la pool. Hx 50 32 et d'Octal 55 37");
}
