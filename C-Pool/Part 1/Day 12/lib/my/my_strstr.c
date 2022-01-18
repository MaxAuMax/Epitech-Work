/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Task05
*/

char *my_strstr(char *str , char const *to_find)
{
    int i = 0;

    if (str[i] == '\0' || *to_find == '\0') {
        return (0);
    } else {
        while (str[i] != *to_find) {
            str[i] = str[i] - (str[i] - 1);
            i++;
        }
    }
    return (str);
}
