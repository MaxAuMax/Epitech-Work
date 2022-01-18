/*
** EPITECH PROJECT, 2021
** day08
** File description:
** task01
*/

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(dest, src);
    return (dest);
}
