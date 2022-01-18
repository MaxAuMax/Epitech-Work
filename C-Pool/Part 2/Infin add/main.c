/*
** EPITECH PROJECT, 2021
** main
** File description:
** ..
*/

#include "include/my.h"

int main(int ac, char **av)
{
    t_num nb1;
    t_num nb2;
    
    if (ac != 3) {
        my_putstr("Wrong arguments");
        return 84;
    }
    nb1.value = av[1];
    nb2.value = av[2];

    if (nb1.value[0] != '-' && nb2.value[0] == '-') {
        topr(&nb2, &nb1);
        my_putstr(sub_inf2(&nb2, &nb1));
        my_putchar('\n');
        return (0);
    }
    if (nb1.value[0] == '-' && nb2.value[0] != '-') {
        topr(&nb1, &nb2);
        my_putstr(sub_inf2(&nb1, &nb2));
        my_putchar('\n');
        return (0);
    }
    if (nb1.value[0] == '-' && nb2.value[0] == '-') {
        top1(&nb1,&nb2);
        my_putchar('-');
        my_putstr(sub_inf(&nb1, &nb2));
        my_putchar('\n');
        return (0);
    }
    if (nb1.value[0] != '-' && nb2.value[0] != '-') {
        top1(&nb1,&nb2);
        my_putstr(add_inf(&nb1, &nb2));
        my_putchar('\n');
    }
    return 0;
}
