/*
** EPITECH PROJECT, 2021
** strn-cat
** File description:
** ..
*/

char *my_strncat(char *dest, const char *src, int nb)
{
    int len = my_strlen(dest);
    int i = 0;

    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';

    return (dest);
}
