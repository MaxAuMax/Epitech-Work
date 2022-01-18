/*
** EPITECH PROJECT, 2021
** Test_my_revstr
** File description:
** Task04
*/

#include <criterion/criterion.h>

Test(my_revstr , copy_five_characters_in_empty_array)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str , "olleH");
}
