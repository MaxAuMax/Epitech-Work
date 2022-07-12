/*
** EPITECH PROJECT, 2021
** my revstr
** File description:
** Task03
*/

char *my_revstr(char *src)
{
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }

    int front = 0;
    int end = len - 1;
    char temp;

    while (front < end) {
        temp = src[front];
        src[front] = src[end];
        src[end] = temp;
        front++;
        end--;
    }
    return (src);
}
