/*
** EPITECH PROJECT, 2021
** my putstr
** File description:
** Task02
*/

int my_putstr(char const *str)
{
    int mod = 0;
    while (str[mod] != '\0') {
        my_putchar(str[mod]);
        mod = mod + 1;
    }
    return (0);
}
