/*
** EPITECH PROJECT, 2021
** strdup
** File description:
** ..
*/

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    my_strcpy(dest, src);
    return (dest);
}
