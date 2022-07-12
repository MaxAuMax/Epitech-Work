/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for process_info
*/

#include "../../includes/my.h"

int main(void)
{
    my_printf("PID: %d\n", getpid());
    my_printf("PPID: %d\n", getppid());
    my_printf("PGID: %d\n", getpgid(getpid()));

    return (0);
}
