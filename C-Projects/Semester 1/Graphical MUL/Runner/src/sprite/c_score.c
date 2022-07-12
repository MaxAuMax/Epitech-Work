/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_score.c
*/

#include "my.h"

void c_score_num(t_text *num)
{
    num->value = 0;
    num->str = "1000";
    num->len = my_strlen(num->str);
    num->pos = (sfVector2f){920, 60};
    num->font = sfFont_createFromFile("files/rubb.ttf");
    num->text = sfText_create();
    sfText_setFont(num->text, num->font);
    sfText_setString(num->text, num->str);
    sfText_setColor(num->text, sfWhite);
    sfText_setPosition(num->text, num->pos);
}

void c_score(t_text *score)
{
    score->str = "SCORE";
    score->pos = (sfVector2f){885, 10};
    score->font = sfFont_createFromFile("files/rubb.ttf");
    score->text = sfText_create();
    sfText_setFont(score->text, score->font);
    sfText_setString(score->text, score->str);
    sfText_setColor(score->text, sfRed);
    sfText_setPosition(score->text, score->pos);
    sfText_setCharacterSize(score->text, 37);
    sfText_setStyle(score->text, sfTextUnderlined);
}
