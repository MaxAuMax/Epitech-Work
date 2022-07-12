/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** Function that compares two strings for a limit n
*/

int my_strncmp(char *fst, char *snd, int n)
{
    int itr;

    for (itr = 0; fst[itr] == snd[itr] && fst[itr] != '\0'
            && snd[itr] != '\0' && itr < n; itr++);
    if ((fst[itr] == '\0' && snd[itr] == '\0') || itr == n)
        return (0);
    else if (fst[itr] > snd[itr])
        return (1);
    else
        return (-1);
}
