/*
** EPITECH PROJECT, 2021
** strn-cmp
** File description:
** ..
*/

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && (i <= n)) {
        i++;
    }
    return (s1[i] - s2[i]);
}
