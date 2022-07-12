/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** my_str_to_int.c²
*/

int my_str_to_int(char *str)
{
    int y = 0;
    int new = 0;

    new = str[y] - '0';
    while (str[y] != '\0') {
        if (str[y + 1] >= '0' && str[y + 1] <= '9') {
            y++;
            new = new * 10;
            new = new + str[y] - '0';
        } else {
            y++;
        }
    }
    return (new);
}
