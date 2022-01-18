/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** task
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int p;

    for (p = 0 ; p < nb && src[p] != '\0' ; p++)
        dest[dest_len + p] = src[p];
    dest[dest_len + p] = '\0';

    return (dest);
}
