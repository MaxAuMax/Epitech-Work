/*
** EPITECH PROJECT, 2021
** MY_SORT_INT_ARRAY
** File description:
** Function that sorts numbers in an array from the smallest to the biggest
*/

#include "../includes/my.h"

void my_sort_int_array(int *array, int size)
{
    int itr, tmp = 0;

    for (itr = 1; itr != size; itr++) {
        if (array[itr] < array[itr - 1]) {
            tmp = array[itr];
            array[itr] = array[itr - 1];
            array[itr - 1] = tmp;
            itr = itr - 2;
        }
    }
}
