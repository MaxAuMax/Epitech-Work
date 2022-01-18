/*
** EPITECH PROJECT, 2021
** sort_int_array
** File description:
** Task06
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int snd = 0;

    while (i != size) {
        if (i > 0 && array[i] < array[i - 1]) {
            snd = array[i];
            array[i] = array[i - 1];
            array[i - 1] = snd;
            i -= 2;
        }
        i++;
    }
}
