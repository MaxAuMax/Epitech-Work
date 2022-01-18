/*
** EPITECH PROJECT, 2021
** strncopy
** File description:
** Task02
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    while (i <  n) {
        dest[i] = src[i];
        i++;
    }
    if (n > my_strlen(src)) {
        dest[i] = '\0';
        return (dest);
    }
    return (dest);
}
