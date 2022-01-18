/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** task02
*/

int my_putstr(char const *str)
{
    int k;

    k = 0;
    while (str[k] != '\0') {
        my_putchar(str[k]);
        k++;
    }
}
