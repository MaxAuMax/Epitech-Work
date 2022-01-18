/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** task04
*/

int my_compute_power_rec(int nb , int p)
{
    if (p == 0) {
        return (1);
    }
    if (nb == 0) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    if (p == 1) {
        return (nb);
    }
    if (p > 0) {
        nb = nb * my_compute_power_rec(nb, p - 1);
    }
    return (nb);
}
