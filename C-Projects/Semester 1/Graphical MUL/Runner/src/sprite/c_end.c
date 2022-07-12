/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_end.c
*/

#include "my.h"

void c_victory(t_text *victory)
{
    victory->str = "GG VICTORY";
    victory->len = my_strlen(victory->str);
    victory->pos = (sfVector2f){500, 400};
    victory->font = sfFont_createFromFile("files/rubb.ttf");
    victory->text = sfText_create();
    sfText_setFont(victory->text, victory->font);
    sfText_setString(victory->text, victory->str);
    sfText_setColor(victory->text, sfWhite);
    sfText_setPosition(victory->text, victory->pos);
    sfText_setCharacterSize(victory->text, 130);
}

void c_death(t_text *death)
{
    death->str = "YOU DIED";
    death->len = my_strlen(death->str);
    death->pos = (sfVector2f){600, 420};
    death->font = sfFont_createFromFile("files/rubb.ttf");
    death->text = sfText_create();
    sfText_setFont(death->text, death->font);
    sfText_setString(death->text, death->str);
    sfText_setColor(death->text, sfRed);
    sfText_setPosition(death->text, death->pos);
    sfText_setCharacterSize(death->text, 120);
}
