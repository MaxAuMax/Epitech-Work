/*
** EPITECH PROJECT, 2021
** str-cat
** File description:
** ..
*/

char *my_strcat(char *dest , char const *src)
{
    int len = my_strlen(dest);
    int j = 0;

    while (src[j] != '\0') {
        dest[len] = src[j];
        len++;
        j++;
    }
    dest[len] = '\0';
    return (dest);
}
