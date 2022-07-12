/*
** EPITECH PROJECT, 2021
** MY_STRNCAT
** File description:
** Function that copies a string into another for a limit n
*/

char *my_strncat(char *dest, char const *src, int n)
{
    int itr1 = 0, itr2 = 0;

    for (itr1; dest[itr1] != '\0'; itr1++);
    for (itr2; src[itr2] != '\0'; itr2++) {
        if (itr2 < n)
            dest[itr1 + itr2] = src[itr2];
    }
    return (dest);
}
