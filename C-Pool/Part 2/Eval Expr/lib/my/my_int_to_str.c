/*
** EPITECH PROJECT, 2021
** intstr
** File description:
** ..
*/

char *my_int_to_str(int nb)
{
    int bn = nb;
    int i = 0;

    while (bn < 0) {
        bn = bn / 10;
        i++;
    }
    char *str = malloc(sizeof(char) * i + 1);

    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        str = str + nb - '0';
    }
    return (str);
}
