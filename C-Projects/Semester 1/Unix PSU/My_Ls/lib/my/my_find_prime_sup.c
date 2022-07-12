/*
** EPITECH PROJECT, 2021
** my find prime sup
** File description:
** Task07
*/

int my_find_prime_sup(int nb)
{
    if (nb <= 1) {
        return (2);
    } else {
        int i = nb;
        while (i > 0) {
            if (i == 3 || i == 5 || i == 7) {
                return (i);
            } else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                i++;
            } else {
                return (i);
            }
        }
    }
}
