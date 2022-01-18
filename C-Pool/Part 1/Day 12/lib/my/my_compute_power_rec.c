/*
** EPITECH PROJECT, 2021
** my compute power rec
** File description:
** Task04
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 1) {
        return (nb);
    }
    if (p == 0) {
        return (1);
    }
    if (nb == 1) {
        return (1);
    }
    if (p < 0) {
        return (0);
    } else {
        nb = nb * my_compute_power_rec(nb, p - 1);
    }
    return (nb);
}
