/*
** EPITECH PROJECT, 2021
** My Strlen
** File description:
** Task
*/

int my_strlen(char const *str)
{
    int mod = 0;
    while (str[mod] != '\0') {
        mod = mod + 1;
    }
    return (mod);
}
