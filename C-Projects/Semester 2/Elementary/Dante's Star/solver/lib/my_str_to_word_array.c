/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** my_show_word_array.c
*/

#include "my.h"

int find_nb_words(char *str)
{
    int i;
    int nb = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '=')
            nb++;
    }
    nb++;
    return (nb);
}

void find_nb_letters(char *str, letters_t *l)
{
    l->nb_letters = 0;

    for (l->ind; str[l->ind] != '\n' && str[l->ind] != '=' &&
    str[l->ind] != '\0'; l->ind++) {
        l->nb_letters++;
    }
    l->ind++;
}

letters_t create_struct(void)
{
    letters_t temp;
    temp.ind = 0;
    temp.nb_letters = 0;

    return (temp);
}

char **my_str_to_word_array(char *str)
{
    int nb_words = find_nb_words(str);
    char **tab;
    int i = 0, j = 0, ind = 0;
    letters_t letters = create_struct();
    tab = malloc(sizeof(char *) * (nb_words + 1));
    for (i = 0; i < nb_words; i++) {
        find_nb_letters(str, &letters);
        tab[i] = malloc(sizeof(char) * (letters.nb_letters + 1));
        while (ind < letters.ind - 1) {
            tab[i][j] = str[ind];
            j++;
            ind++;
        }
        ind++;
        tab[i][j] = '\0';
        j = 0;
    }
    tab[i] = NULL;
    return (tab);
}
