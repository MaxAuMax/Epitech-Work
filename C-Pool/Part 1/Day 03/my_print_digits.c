/*
** EPITECH PROJECT, 2021
** my print digits
** File description:
** 
*/

int my_print_digits(void)
{
    int val;
    val = 48;
    while (val < 58) {
        my_putchar(val);
        val = val + 1;
    }
    return (0);
}
