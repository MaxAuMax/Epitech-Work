/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** Task
*/

int my_getnbr(char const *str)
{
    int	nb = 0;
    int	neg = 1;
    int	i = 0;
    for (i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-') {
            neg = neg * -1;
        }
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i = i + 1;
        } else {
            return (nb * neg);
        }
        return (nb * neg);
    }
}
