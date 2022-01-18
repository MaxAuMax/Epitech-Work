/*
** EPITECH PROJECT, 2021
** my print alpha
** File description:
** ..
*/

int my_print_alpha(void)
{
    int val;
    val = 97;
    while (val < 123) {
        my_putchar(val);
        val = val + 1;
    }
    return (0);
}
