/*
** EPITECH PROJECT, 2021
** my print comb
** File description:
** 
*/

int my_print_comb(void)
{
    char first = 48;
    char mid = 49;
    char last = 50;
    for (first = 48 ; first < 56 ; first++)
        for (mid = first + 1 ; mid < 57 ; mid++)
            for (last = mid + 1 ; last < 58 ; last++) {
                my_putchar(first);
                my_putchar(mid);
                my_putchar(last);
                if (first == 55 && mid == 56 && last == 57) {
                    break;
                } else {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
    return (0);
}
