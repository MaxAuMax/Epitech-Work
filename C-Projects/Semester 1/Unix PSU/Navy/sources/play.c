/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** play.c
*/

#include "../includes/my.h"

void play_p1(variable *var)
{
    int pass = 0;
    my_printf("my positions:\n%s\n\n", var->map);
    my_printf("enemy's position:\n%s\n\n", var->map2);
    while (pass == 0) {
        int wrong = 0;
        for (int i = 0; var->attack[i] != '\0'; i++)
            var->attack[i] = '\0';
        my_putstr("attack: ");
        read(0, var->attack, 1024);
        if (my_strlen(var->attack) - 1 < 2 || my_strlen(var->attack) - 1 > 2) {
            my_putstr("wrong position\n\n");
        } else {
            var->attack[2] = '\0';
            if (check_pos(var->attack) != 0)
                wrong = 1;
            if (wrong == 0) {
                send_attack(var, var->pid2);
                usleep(1000);
                my_printf("%s: ", var->attack);
                usleep(1000);
                receive_hit(var, var->map2);
                pass = 1;
            } else
                my_putstr("wrong position\n");
        }
    }
    my_printf("waiting for enemy's attack\n");
    int pas = 0;
    while (pas == 0)
        pas = receive_attack(var);
    usleep(4000);
    check_hit(var, var->map, var->map2, var->pid2);
    my_printf("%s: %s\n", var->attack, var->message);
}

void play_p2(variable *var)
{
    my_printf("my positions:\n%s\n\n", var->map2);
    my_printf("enemy's position:\n%s\n\n", var->map);
    my_printf("waiting for enemy's attack\n");
    int pas = 0;
    usleep(1000);
    while (pas == 0)
        pas = receive_attack(var);
    usleep(4000);
    check_hit(var, var->map2, var->map, var->pid);
    my_printf("%s: %s\n", var->attack, var->message);
    int pass = 0;
    while (pass == 0) {
        int wrong = 0;
        for (int i = 0; var->attack[i] != '\0'; i++)
            var->attack[i] = '\0';
        my_putstr("attack: ");
        read(0, var->attack, 1024);
        if (my_strlen(var->attack) - 1 < 2 || my_strlen(var->attack) - 1 > 2) {
            my_putstr("wrong position\n\n");
        } else {
            var->attack[2] = '\0';
            if (check_pos(var->attack) != 0)
                wrong = 1;
            if (wrong == 0) {
                send_attack(var, var->pid);
                usleep(1000);
                my_printf("%s: ", var->attack);
                usleep(1000);
                receive_hit(var, var->map);
                pass = 1;
            } else
                my_putstr("wrong position\n");
        }
    }
}

int play(int ac, variable *var)
{
    while (var->win != 0 && var->win != 1) {
        if (ac == 2) {
            play_p1(var);
            usleep(5000);
            check_boats(var, var->map, var->pid2); 
            who_won(var);
            usleep(2000);
        }
        if (ac == 3) {
            play_p2(var);
            usleep(5000);
            check_boats(var, var->map2, var->pid);
            who_won(var);
            usleep(2000);
        }
    }
    return (0);
}