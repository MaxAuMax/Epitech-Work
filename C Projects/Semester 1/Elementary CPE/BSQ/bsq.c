/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-maxime.mallet
** File description:
** bsq
*/

#include "include/my.h"

char *replace(char *str, int len, int x, int lenn)
{
    for (int k = 0, l = 0; l < lenn; k += len, l++) {
        for (int y = 0; y < lenn; y++)
            str[x - y - k] = 'x';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0')
            str[i] = 'o';
        else if (str[i] != '\n' && str[i] != 'x')
            str[i] = '.';
    }

    return (str);
}

char compare(char *str, int x, int len)
{
    char min = str[x - 1];

    if (str[x - len] < min)
        min = str[x - len];
    else if (str[x - len - 1] < min)
        min = str[x - len - 1];
    min++;

    return (min);
}

char *corners(char *str, int len)
{
    int i;

    for (i = 0; str[i] != '\n'; i++) {
        if (str[i] == '.')
            str[i] = '1';
        else if (str[i] == 'o')
            str[i] = '0';
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' && str[i + 1] == '.')
            str[i + 1] = '1';
        else if (str[i] == '\n' && str[i + 1] == 'o')
            str[i + 1] = '0';
    }
    return (str);
}

t_point check_first(char *str, t_point point)
{
    point.len = 0, point.x = 0;
    for (int j = 0, out = 0; str[j] != '\0' && out == 0; j++) {
        if (str[j] == '.') {
            point.len = 1, point.x = j;
            out = 1;
        }
    }
    return (point);
}

char *bsq(char *str)
{
    t_point point;
    point = check_first(str, point);
    char min = '0';
    int len = line_len(str);
    str = corners(str, len);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] == '.') {
            min = compare(str, x, len);
            str[x] = min;
        } else if (str[x] == 'o')
            str[x] = '0';
        int mini = min - '0';
        if (mini > point.len) {
            point.len = mini, point.x = x;
        }
    }
    int lenn = point.len, x = point.x;
    str = replace(str, len, x, lenn);
    return (str);
}
