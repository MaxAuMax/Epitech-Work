/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init.c
*/

#include "rpg.h"

void init_bkg(t_global *glb)
{
    glb->bkg->rect.top = 0;
    glb->bkg->rect.left = 0;
    glb->bkg->rect.width = 903;
    glb->bkg->rect.height = 543;

    glb->bkg->txtr =
    sfTexture_createFromFile("assets/menu/summer-modified.png", NULL);
    glb->bkg->sp = sfSprite_create();
    glb->bkg->scale = (sfVector2f) {2.15, 2};
    sfSprite_setTexture(glb->bkg->sp, glb->bkg->txtr, sfFalse);
    sfSprite_setTextureRect(glb->bkg->sp, glb->bkg->rect);
    sfSprite_setScale(glb->bkg->sp, glb->bkg->scale);

}

void init_button_play(t_global *glb)
{
    glb->play->rect.top = 0;
    glb->play->rect.left = 0;
    glb->play->rect.width = 144;
    glb->play->rect.height = 48;

    glb->play->txtr = sfTexture_createFromFile("assets/menu/play.png", NULL);
    glb->play->sp = sfSprite_create();
    glb->play->pos = (sfVector2f) {150, 600};
    glb->play->scale = (sfVector2f) {2, 2};
    sfSprite_setTexture(glb->play->sp, glb->play->txtr, sfFalse);
    sfSprite_setTextureRect(glb->play->sp, glb->play->rect);
    sfSprite_setPosition(glb->play->sp, glb->play->pos);
    sfSprite_setScale(glb->play->sp, glb->play->scale);
}

void init_button_quit(t_global *glb)
{
    glb->quit->rect.top = 0;
    glb->quit->rect.left = 0;
    glb->quit->rect.width = 144;
    glb->quit->rect.height = 48;

    glb->quit->txtr = sfTexture_createFromFile("assets/menu/quit.png", NULL);
    glb->quit->sp = sfSprite_create();
    glb->quit->pos = (sfVector2f) {1500, 600};
    glb->quit->scale = (sfVector2f) {2, 2};
    sfSprite_setTexture(glb->quit->sp, glb->quit->txtr, sfFalse);
    sfSprite_setTextureRect(glb->quit->sp, glb->quit->rect);
    sfSprite_setPosition(glb->quit->sp, glb->quit->pos);
    sfSprite_setScale(glb->quit->sp, glb->quit->scale);
}

void init_button_setings(t_global *glb)
{
    glb->setings->rect.top = 0;
    glb->setings->rect.left = 0;
    glb->setings->rect.width = 144;
    glb->setings->rect.height = 48;

    glb->setings->txtr =
    sfTexture_createFromFile("assets/menu/settings.png", NULL);
    glb->setings->sp = sfSprite_create();
    glb->setings->pos = (sfVector2f) {1000, 800};
    glb->setings->scale = (sfVector2f) {1.5, 1.5};
    sfSprite_setTexture(glb->setings->sp, glb->setings->txtr, sfFalse);
    sfSprite_setTextureRect(glb->setings->sp, glb->setings->rect);
    sfSprite_setPosition(glb->setings->sp, glb->setings->pos);
    sfSprite_setScale(glb->setings->sp, glb->setings->scale);
}

void init_button_htp(t_global *glb)
{
    glb->htp->rect.top = 0;
    glb->htp->rect.left = 0;
    glb->htp->rect.width = 144;
    glb->htp->rect.height = 48;

    glb->htp->txtr = sfTexture_createFromFile("assets/menu/htp.png", NULL);
    glb->htp->sp = sfSprite_create();
    glb->htp->pos = (sfVector2f) {650, 800};
    glb->htp->scale = (sfVector2f) {1.5, 1.5};
    sfSprite_setTexture(glb->htp->sp, glb->htp->txtr, sfFalse);
    sfSprite_setTextureRect(glb->htp->sp, glb->htp->rect);
    sfSprite_setPosition(glb->htp->sp, glb->htp->pos);
    sfSprite_setScale(glb->htp->sp, glb->htp->scale);
}
