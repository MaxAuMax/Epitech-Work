/*
** EPITECH PROJECT, 2021
** my compute factorial it
** File description:
** Task01
*/

int my_compute_factorial_it(int nb)
{
    int fac = 1;

    if (nb < 0) {
        return (0);
    } else if (nb <= 1) {
        return (1);
    } else if (nb > 1) {
        while (nb > 1) {
            if (nb > 12) {
                return (0);
            } else {
                fac = fac * nb;
                nb = nb -1;
            }
        }
    } else {
        return (0);
    }
    return (fac);
}
