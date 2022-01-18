/*
** EPITECH PROJECT, 2021
** day08
** File description:
** task03
*/

int my_show_word_array(char * const *tab)
{
    int p = 0;

    while (tab[p] != 0 ) {
        my_putstr(tab[p]);
        my_putchar('\n');
        p++;
    }
    return (0);
}
