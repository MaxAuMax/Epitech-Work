/*
** EPITECH PROJECT, 2021
** prio
** File description:
** ..
*/

#include "include/my.h"

char *concat(char *str, int one, int res, int end)
{
    int i = 0;
    char *mid = my_int_to_str(res);
    int mlen = my_strlen(mid);
    int slen = my_strlen(str);
    int mlc = one + mlen + (slen - end);
    char *new = malloc(sizeof(char) * mlc + 1);
    for (i = 0; i < one; i++)
        new[i] = str[i];
    for (int j = 0; j < mlen ; j++) {
        new[i] = mid[j];
        i++;
    }
    for (int k = end + 1; str[k] != '\0'; k++) {
        new[i] = str[k];
        i++;
    }
    return (new);
}