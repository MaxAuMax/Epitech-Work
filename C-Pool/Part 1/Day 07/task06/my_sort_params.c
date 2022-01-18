/*
** EPITECH PROJECT, 2021
** sortparams
** File description:
** ..
*/

int *main(int argc, char **argv)
{
    int	i = 0;
    char *p;

    while (argc - 1 > i) {
        if (my_strcmp(argv[i], argv[i + 1]) > 0) {
            p = argv[i];
            argv[i] = argv[i + i];
            argv[i + 1] = p;
            my_putstr(argv[i]);
	}
        i++;
    }
    i = 0;
    while (argc > i) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
