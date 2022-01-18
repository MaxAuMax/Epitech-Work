/*
** EPITECH PROJECT, 2021
** my compute power it
** File description:
** Task03
*/

int my_compute_power_it(int nb, int p)
{
    int res = 1;

    if (p == 1) {
        return (nb);
    } if (p == 0) {
        return (1);
    } if (nb == 1) {
        return (1);
    } else {
        while (p > 0) {
            res = res * nb;
            p = p - 1;
        }
    }
    return (res);
}
