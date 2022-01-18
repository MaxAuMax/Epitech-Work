/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for who_sig_me
*/

#include "../../includes/my.h"

void check(int sig)
{
    if (sig == SIGUSR1) {
        my_putstr("Signal User defined signal 1 received from ");
        my_put_nbr(getpid());
        my_putchar('\n');
    } else if (sig == SIGUSR2) {
        my_putstr("Signal User defined signal 2 received from ");
        my_put_nbr(getpid());
        my_putchar('\n');
    } else if (sig == SIGQUIT) {
        kill(getpid(), SIGKILL);
    } else
        my_putstr("Unable to handle Killed signal\n");
}

int main(void)
{
    signal(SIGUSR1, check);
    signal(SIGUSR2, check);
    signal(SIGQUIT, check);
    while (1);
}
