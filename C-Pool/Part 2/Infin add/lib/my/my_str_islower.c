/*
** EPITECH PROJECT, 2021
** islower
** File description:
** ..
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
