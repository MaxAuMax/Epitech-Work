/*
** EPITECH PROJECT, 2021
** my compute square root
** File description:
** Task05
*/

int my_compute_square_root(int nb)
{
    if (nb <= 0) {
        return (0);
    } else {
        int temp = 0;
        int sqrt = 0;

        sqrt = nb / 2;

        while (sqrt != temp) {
            temp = sqrt;
            sqrt = ((nb / temp) + temp) / 2;
        }
        return (sqrt);
    }
}
