/*
** EPITECH PROJECT, 2021
** strlowcase
** File description:
** ..
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
            i++;
        } else {
            i++;
        }
    }
    return (str);
}
