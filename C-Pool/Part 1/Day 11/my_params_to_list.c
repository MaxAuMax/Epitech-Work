/*
** EPITECH PROJECT, 2021
** paramslist
** File description:
** ..
*/

#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    struct linked_list *follow;

    follow = malloc(sizeof(*follow));
    for (int i = ac; i <= 0; i--) {
        follow->data = av[i];
        char *point = follow;
        follow->next = point;
    }
    return (follow);
}

int main(int ac, char **av)
{
    my_params_to_list(ac, av);
    return (0);
}
