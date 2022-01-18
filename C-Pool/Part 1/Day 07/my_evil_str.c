/*
** EPITECH PROJECT, 2021
** my evil str
** File description:
** Task04
*/

char *my_evil_str(char *str)
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int front = 0;
    int end = len - 1;
    char temp;

    while (front < end) {
        temp = str[front];
        str[front] = str[end];
        str[end] = temp;
        front++;
        end--;
    }
    return (str);
}
