/*
** EPITECH PROJECT, 2021
** str-cmp
** File description:
** ..
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while ((s1[i] == s2[j]) && (s1[i] != '\0') && (s2[j] != '\0')) {
        i++;
        j++;
    }
    return (s1[i] - s2[j]);
}
