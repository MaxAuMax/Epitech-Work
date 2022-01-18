/*
** EPITECH PROJECT, 2021
** revparams
** File description:
** ..
*/

int main(int argc, char **argv)
{
    int i = argc - 1;

    while (i >= 0) {
        my_putstr(argv[i]);
        i--;
        my_putchar('\n');
    }
    return (0);
}
