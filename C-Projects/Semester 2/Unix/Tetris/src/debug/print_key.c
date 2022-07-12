/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** print_key.c
*/

#include "my.h"

void print_key_pause(t_global *global)
{
    my_putstr("Key pause: ");
    if (global->key_pause == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_pause == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_pause == 259)
        my_putstr("KEY_UP (259)\n");
    if (global->key_pause == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_pause != 260 && global->key_pause != 261 &&
    global->key_pause != 259 && global->key_pause != 258)
        my_printf("%c (%d)\n",global->key_pause, global->key_pause);
}

void print_key_left(t_global *global)
{
        my_putstr("Key left: ");
    if (global->key_left == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_left == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_left == 259)
        my_putstr("KEY_UP (259)\n");
    if (global->key_left == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_left != 260 && global->key_left != 261 &&
    global->key_left != 259 && global->key_left != 258)
        my_printf("%c (%d)\n",global->key_left, global->key_left);
}

void print_key_right(t_global *global)
{
    my_putstr("Key right: ");
    if (global->key_right == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_right == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_right == 259)
        my_putstr("KEY_UP (259)\n");
    if (global->key_right == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_right != 260 && global->key_right != 261 &&
    global->key_right != 259 && global->key_right != 258)
        my_printf("%c (%d)\n",global->key_right, global->key_right);
}

void print_key_turn(t_global *global)
{
    my_putstr("Key turn: ");
    if (global->key_turn == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_turn == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_turn == 259)
        my_putstr("KEY_UP (259)\n");
    if (global->key_turn == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_turn != 260 && global->key_turn != 261 &&
    global->key_turn != 259 && global->key_turn != 258)
        my_printf("%c (%d)\n",global->key_turn, global->key_turn);
}

void print_key_drop(t_global *global)
{
    my_putstr("Key drop: ");
    if (global->key_drop == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_drop == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_drop == 259)
        my_putstr("KEY_UP (259)\n");
    if (global->key_drop == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_drop != 260 && global->key_drop != 261 &&
    global->key_drop != 259 && global->key_drop != 258)
        my_printf("%c (%d)\n",global->key_drop, global->key_drop);
}
