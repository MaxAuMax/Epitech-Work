/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** push_swap.c
*/

#include "my.h"

int sort(pile *la, pile *lb)
{
    int pass = 0;
    while (la->first->next != NULL) {
        if (la->first->nb > la->first->next->nb) {
            sa(la, 1);
            pass++;
        }
        pb(la, lb, 1);
    }
    while (lb->first->next != NULL) {
        if (lb->first->nb < lb->first->next->nb) {
            sb(lb, 1);
        }
        pa(la, lb, 1);
    }
    pa(la, lb, 1);
    return (pass);
}

void push_swap(pile *la, pile *lb)
{
    int pass = 1;
    while (pass != 0) {
        pass = sort(la, lb);
    }
    my_putstr("sa sa\n");
}

void first(pile *la, int ac, int i)
{
    if (i < ac - 2) {
        if (la->first->nb > la->first->next->nb) {
            sa(la, 1);
        }
    }
}

int main(int ac, char **av)
{
    pile *la = malloc(sizeof(pile));
    pile *lb = malloc(sizeof(pile));
    la->first = NULL, lb->first = NULL;

    if (sorted(ac, av) == 0){
        my_putchar('\n');
        return (0);
    }
    if (ac == 2)
        my_putchar('\n');
    for (int i = ac - 1; i > 0; i--)
        empile(la, my_str_to_int(av[i]));
    push_swap(la, lb);
    free(la);
    free(lb);

    return (0);
}
