/*
** EPITECH PROJECT, 2021
** my is prime
** File description:
** Task06
*/

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    } else if (nb == 2 || nb == 3 || nb == 5 || nb == 7) {
        return (1);
    } else {
        int nb2 = nb % 2;
        int nb3 = nb % 3;
        int nb5 = nb % 5;
        int nb7 = nb % 7;
        if (nb2 == 0 || nb3 == 0 || nb5 == 0 || nb7 == 0) {
            return (0);
        } else {
            return (1);
        }
    }
}
