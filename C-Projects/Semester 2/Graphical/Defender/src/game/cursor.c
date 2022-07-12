/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** cursor.c
*/

#include "my.h"

void create_set_cursor(t_sprite *cross)
{
    cross->sp = sfSprite_create();
    cross->texture = sfTexture_createFromFile("pics/cursor.png", NULL);
    cross->scale = (sfVector2f){1, 1};
    cross->pos = (sfVector2f){0, 0};
    cross->rect.left = 0;
    cross->rect.top = 0;
    cross->rect.height = 30;
    cross->rect.width = 30;
    sfSprite_setScale(cross->sp, cross->scale);
    sfSprite_setTexture(cross->sp, cross->texture, false);
    sfSprite_setOrigin(cross->sp, (sfVector2f){3, 3});
}
