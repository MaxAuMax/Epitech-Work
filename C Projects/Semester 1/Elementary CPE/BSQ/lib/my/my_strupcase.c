/*
** EPITECH PROJECT, 2021
** strupcase
** File description:
** ..
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            i++;
        } else {
            i++;
        }
    }
    return (str);
}
