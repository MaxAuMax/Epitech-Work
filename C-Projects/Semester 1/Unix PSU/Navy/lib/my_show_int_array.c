/*
** EPITECH PROJECT, 2021
** MY_SHOW_WORD_ARRAY
** File description:
** Function printing array
*/

#include "../includes/my.h"

void my_show_int_array(int *array)
{
    for (int itr = 0; array[itr] != '\0'; itr++)
        my_put_nbr(array[itr]);
}
