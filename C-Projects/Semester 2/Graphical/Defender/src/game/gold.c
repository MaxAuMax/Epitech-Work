/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** gold.c
*/

#include "my.h"

void create_gold(t_text *gold)
{
    gold->font = sfFont_createFromFile("pics/font.ttf");
    gold->value = 40;
    gold->str = "40";
    gold->text = sfText_create();
    sfText_setString(gold->text, gold->str);
    gold->pos = (sfVector2f){930, 0};
    sfText_setPosition(gold->text, gold->pos);
    sfText_setColor(gold->text, sfYellow);
    sfText_setScale(gold->text, (sfVector2f){2, 2});
    sfText_setFont(gold->text, gold->font);
}

void gold_icon(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/game/Coin.png", NULL);
    sprite->pos = (sfVector2f){840, -5};
    sprite->scale = (sfVector2f){0.2, 0.2};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 500;
    sprite->rect.height = 500;
}
