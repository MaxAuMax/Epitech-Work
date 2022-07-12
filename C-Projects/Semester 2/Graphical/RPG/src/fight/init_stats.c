/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_stats.c
*/

#include "rpg.h"

void init_php(t_global *glb)
{
    glb->fgt->php = malloc(sizeof(t_text));
    glb->fgt->php->text = sfText_create();
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->player->hp);
    str[2] = '\0';
    glb->fgt->php->str = str;
    glb->fgt->php->font = sfFont_createFromFile("assets/font.ttf");
    glb->fgt->php->pos = (sfVector2f){170, 30};
    sfText_setString(glb->fgt->php->text, glb->fgt->php->str);
    sfText_setFont(glb->fgt->php->text, glb->fgt->php->font);
    sfText_setCharacterSize(glb->fgt->php->text, 65);
    sfText_setPosition(glb->fgt->php->text, glb->fgt->php->pos);
    sfText_setColor(glb->fgt->php->text, sfWhite);
    free(str);
}

void init_atk(t_global *glb)
{
    glb->fgt->patk = malloc(sizeof(t_text));
    glb->fgt->patk->text = sfText_create();
    glb->fgt->atk = glb->player->atk;
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->fgt->atk);
    str[2] = '\0';
    glb->fgt->patk->str = str;
    glb->fgt->patk->font = sfFont_createFromFile("assets/font.ttf");
    glb->fgt->patk->pos = (sfVector2f){170, 110};
    sfText_setString(glb->fgt->patk->text, glb->fgt->patk->str);
    sfText_setFont(glb->fgt->patk->text, glb->fgt->patk->font);
    sfText_setCharacterSize(glb->fgt->patk->text, 65);
    sfText_setPosition(glb->fgt->patk->text, glb->fgt->patk->pos);
    sfText_setColor(glb->fgt->patk->text, sfWhite);
    free(str);
}

void init_pdef(t_global *glb)
{
    glb->fgt->pdef = malloc(sizeof(t_text));
    glb->fgt->pdef->text = sfText_create();
    glb->fgt->def = glb->player->def;
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->fgt->def);
    str[2] = '\0';
    glb->fgt->pdef->str = str;
    glb->fgt->pdef->font = sfFont_createFromFile("assets/font.ttf");
    glb->fgt->pdef->pos = (sfVector2f){170, 200};
    sfText_setString(glb->fgt->pdef->text, glb->fgt->pdef->str);
    sfText_setFont(glb->fgt->pdef->text, glb->fgt->pdef->font);
    sfText_setCharacterSize(glb->fgt->pdef->text, 65);
    sfText_setPosition(glb->fgt->pdef->text, glb->fgt->pdef->pos);
    sfText_setColor(glb->fgt->pdef->text, sfWhite);
    free(str);
}

void init_pdodge(t_global *glb)
{
    glb->fgt->pdodge = malloc(sizeof(t_text));
    glb->fgt->pdodge->text = sfText_create();
    glb->fgt->dodge = glb->player->dodge;
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->player->dodge);
    str[2] = '\0';
    glb->fgt->pdodge->str = str;
    glb->fgt->pdodge->font = sfFont_createFromFile("assets/font.ttf");
    glb->fgt->pdodge->pos = (sfVector2f){170, 280};
    sfText_setString(glb->fgt->pdodge->text, glb->fgt->pdodge->str);
    sfText_setFont(glb->fgt->pdodge->text, glb->fgt->pdodge->font);
    sfText_setCharacterSize(glb->fgt->pdodge->text, 65);
    sfText_setPosition(glb->fgt->pdodge->text, glb->fgt->pdodge->pos);
    sfText_setColor(glb->fgt->pdodge->text, sfWhite);
    free(str);
}

void init_ehp(t_global *glb)
{
    glb->fgt->ehp = malloc(sizeof(t_text));
    glb->fgt->ehp->text = sfText_create();
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->fgt->en_hp);
    str[2] = '\0';
    glb->fgt->ehp->str = str;
    glb->fgt->ehp->font = sfFont_createFromFile("assets/font.ttf");
    glb->fgt->ehp->pos = (sfVector2f){1770, 35};
    sfText_setString(glb->fgt->ehp->text, glb->fgt->ehp->str);
    sfText_setFont(glb->fgt->ehp->text, glb->fgt->ehp->font);
    sfText_setCharacterSize(glb->fgt->ehp->text, 70);
    sfText_setPosition(glb->fgt->ehp->text, glb->fgt->ehp->pos);
    sfText_setColor(glb->fgt->ehp->text, sfWhite);
    free(str);
}
