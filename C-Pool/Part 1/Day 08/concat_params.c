/*
** EPITECH PROJECT, 2021
** concat
** File description:
** ..
*/

char *concat_params(int argc , char **argv)
{
    int i = 0;

    char *dest = malloc(sizeof(char) * (2 * argc + 1));
    while (i < argc) {
        my_strcat(dest, argv[i]);
        my_strcat(dest, "\n");
        i++;
    }
    return (dest);
}
