/*
** EPITECH PROJECT, 2021
** wordarray
** File description:
** ..
*/

char **my_str_to_word_array(char const *str)
{
    int wd = 0;
    int i = 0;
    int a = 0;
    int b = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\0') {
            i++;
            wd++;
        } else {
            i++;
        }
    }
    char **tab = malloc(sizeof(char *) * (wd + 1));

    for (int x = 0; x <= wd; x++) {
        while (str[a] != ' ' || str[a] != '\0') {
            a++;
        }
        tab[i] = malloc(sizeof(char) * (a));

        int j = 0;
        while (b < a) {
            tab[i][j] = tab[b];
            b++;
            j++;
        }
        tab[i][j + 1] = "\0";
        b = a + 1;
        a++;
        i++;
    }
    tab[i] = "\0";
    return (tab);
}

int main(void)
{
    char *str = "Hello world";
    my_show_word_array(my_str_to_word_array(str));
    return (0);
}
