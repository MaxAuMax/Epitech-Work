/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Task05
*/

char *my_strstr(char *str , char const *to_find)
{
    int i = 0;
    while (str[i] != *to_find) {
        str[i] = str[i] - (str[i] - 1);
        i += 1;
    }
    return (str);
}
