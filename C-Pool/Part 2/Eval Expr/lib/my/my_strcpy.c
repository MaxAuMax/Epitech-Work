/*
** EPITECH PROJECT, 2021
** task
** File description:
** task01
*/

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    while (dest[i] != '\0') {
        dest--;
    }
    return (dest + 'A');
}
