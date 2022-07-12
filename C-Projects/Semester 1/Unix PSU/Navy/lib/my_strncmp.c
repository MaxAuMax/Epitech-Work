/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** Function that compares two strings for a limit n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int itr;

    for (itr = 0; s1[itr] == s2[itr] && s1[itr] != '\0'
            && s2[itr] != '\0' && itr < n; itr++);
    if ((s1[itr] == '\0' && s2[itr] == '\0') || itr == n)
        return (0);
    else if (s1[itr] > s2[itr])
        return (1);
    else
        return (-1);
}
