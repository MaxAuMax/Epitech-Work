/*
** EPITECH PROJECT, 2021
** task
** File description:
** Task06
*/

int my_is_prime(int nb)
{
    int p;

    if (nb == 0 || nb == 1) {
        return (0);
    }
    for (p = 2; p < nb; p++)
        if (nb % p == 0) {
            return (0);
        }
    return (1);
}
