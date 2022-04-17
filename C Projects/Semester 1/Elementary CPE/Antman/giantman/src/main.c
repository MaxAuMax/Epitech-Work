/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-antman-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

void uncompress(char **wrd, char **num)
{
    for (int i = 0; i < my_strstrlen(num); i++) {
        int range = my_str_to_int(num[i]);
        my_putstr(wrd[range]);
        if (i + 1 < my_strstrlen(num))
            my_putchar(' ');
    }
}

int main(int ac, char **av)
{
    struct stat stats;
    stat(av[1], &stats);
    char *str = malloc(stats.st_size + 1);
    int fd = open(av[1], O_RDONLY);
    read(fd, str, stats.st_size);
    str[stats.st_size] = '\0';
    int i = 0;

    while (str[i] != '0')
        i++;
    char *word = malloc(sizeof(char) * i);
    char *nums = malloc(sizeof(char) * (my_strlen(str) - i) + 1);
    for (int y = 0; y < i; y++)
        word[y] = str[y];
    for (int st = 0; str[i] != '\0'; st++, i++)
        nums[st] = str[i];
    char **wrd = my_str_to_word_array_sep(word, '.');
    char **num = my_str_to_word_array_sep(nums, '.');
    uncompress(wrd, num);
}
