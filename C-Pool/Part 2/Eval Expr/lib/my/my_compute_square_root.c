/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** Task05
*/

int my_compute_square_root(int nb)
{
    int s;

    s = 0;
    if (nb < 0) {
        return (0);
    } while ((s * s) != nb) {
        if ((s * s) > nb) {
            return (0);
        }
        s = s + 1;
    }
    return (s);
}
