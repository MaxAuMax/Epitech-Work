/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** task
*/

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest) ;
    int p;

    p = 0;

    while (src[p] != '\0') {
        dest[len + p] = src[p];
        p++;
    }
    dest[len + p] = '\0';
    return (dest);
}
