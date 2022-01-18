/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int k = 0;

    while (str[k] != '\0') {
        k++;
    }
    return (k);
}
