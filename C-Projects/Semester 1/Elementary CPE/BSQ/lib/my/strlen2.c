/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-maxime.mallet
** File description:
** strlen2.c
*/

int strlen2(char const *str)
{
    int mod = 0;
    while (str[mod] != '\n') {
        mod = mod + 1;
    }
    return (mod);
}
