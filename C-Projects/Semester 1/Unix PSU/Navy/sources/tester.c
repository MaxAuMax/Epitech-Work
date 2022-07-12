/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** tester.c
*/

#include "../includes/my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_get_redirected_stderr();
    cr_redirect_stderr();
}

Test(navy, unvalid_file, .init = redirect_all_stdout)
{
    char *test[] = {"./navy", "hehe"};

    cr_assert_eq(navy(2, test), 84);
}

Test(navy, not_enough, .init = redirect_all_stdout)
{
    char *test[] = {"./navy"};

    cr_assert_eq(navy(1, test), 84);
}

Test(navy, too_much, .init = redirect_all_stdout)
{
    char *test[] = {"./navy", "45600", "pos", "encore"};

    cr_assert_eq(navy(4, test), 84);
}
