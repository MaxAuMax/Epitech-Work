/*
** EPITECH PROJECT, 2021
** my print revalpha
** File description:
** 
*/

int my_print_revalpha(void)
{
    int val;
    val = 122;
    while (val > 96) {
        my_putchar(val);
        val = val - 1;
    }
}
