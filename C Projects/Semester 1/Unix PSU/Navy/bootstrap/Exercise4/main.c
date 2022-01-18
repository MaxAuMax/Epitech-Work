/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for signal_me
*/

#include "../../includes/my.h"

int usr1 = 0;
int usr2 = 0;

void check(int sig)
{
    if (sig == SIGUSR1) {
        usr1++;
    } else if (sig == SIGUSR2) {
        usr2++;
    } else if (sig == SIGQUIT) {
        my_printf("SIGUSR1: %d\nSIGUSR2: %d\n", usr1, usr2);
        kill(getpid(), SIGKILL);
    }
}

int main(void)
{
    signal(SIGUSR1, check);
    signal(SIGUSR2, check);
    signal(SIGQUIT, check);
    while (1);
}
