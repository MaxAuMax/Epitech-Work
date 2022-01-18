/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** play.c
*/

#include "../includes/my.h"

glb globe;

void handler(int sig, siginfo_t *info, void *ucontext)
{
    globe.global = info->si_pid;
}

void connect_p1(void)
{
    struct sigaction signal;
    int pid = getpid();

    my_printf("my_pid: %d\n", pid);
    my_printf("waiting for enemy connection...\n\n");
    sigemptyset(&signal.sa_mask);
    signal.sa_sigaction = &handler;
    signal.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &signal, NULL);
    pause();
    my_putstr("enemy connected\n\n");
}

void connect_p2(char **av, variable *var)
{
    int pid = getpid();

    var->pid = my_str_to_int(av[1]);
    kill(var->pid, SIGUSR1);
    my_printf("my_pid: %d\n", pid);
    my_putstr("successfully connected\n\n");
}

int connection(int ac, char **av, variable *var)
{
    if (ac == 2) {
        connect_p1();
        var->pid2 = globe.global;
    } else if (ac == 3) {
        connect_p2(av, var);
    } else
        return (84);
    return (0);
}
