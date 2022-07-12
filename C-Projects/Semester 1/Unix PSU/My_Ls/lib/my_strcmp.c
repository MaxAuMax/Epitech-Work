/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strcmp(char *fst, char *snd)
{
    if (my_strlen(fst) != my_strlen(snd))
        return (-1);

    for (int i = 0; fst[i] != '\0'; i++) {
        if (fst[i] != snd[i])
            return (-1);
    }

    return (0);
}
