/*
** EPITECH PROJECT, 2021
** word_array
** File description:
** ..
*/

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putstr("\n");
        i++;
    }
    return (0);
}
