/*
** EPITECH PROJECT, 2021
** day6
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int   i;
    int   f;
    char  s;

    i = 0;
    f = my_strlen(str) - 1;

    while (i < (my_strlen(str) / 2)) {
        s = str[i];
        str[i] = str[f];
        str[f] = s;
        i++;
        f--;
    }
    return (str);
}
