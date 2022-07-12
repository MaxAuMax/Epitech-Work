/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** update_stats.c
*/

#include "rpg.h"

void update_hp_atk(t_global *glb)
{
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->player->hp);
    str[2] = '\0';
    glb->fgt->php->str = str;
    sfText_setString(glb->fgt->php->text, glb->fgt->php->str);
    free(str);

    char *str2 = malloc(sizeof(char) * 3);
    str2 = my_int_to_str(glb->fgt->atk);
    str2[2] = '\0';
    glb->fgt->patk->str = str2;
    sfText_setString(glb->fgt->patk->text, glb->fgt->patk->str);
    free(str2);
}

void update_dodge_def(t_global *glb)
{
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->fgt->def);
    str[2] = '\0';
    glb->fgt->pdodge->str = str;
    sfText_setString(glb->fgt->pdodge->text, glb->fgt->pdodge->str);
    free(str);

    char *str2 = malloc(sizeof(char) * 3);
    str2 = my_int_to_str(glb->fgt->def);
    str2[2] = '\0';
    glb->fgt->pdef->str = str2;
    sfText_setString(glb->fgt->pdef->text, glb->fgt->pdef->str);
    free(str2);
}

void update_ehp(t_global *glb)
{
    char *str = malloc(sizeof(char) * 3);
    str = my_int_to_str(glb->fgt->en_hp);
    str[2] = '\0';
    glb->fgt->ehp->str = str;
    sfText_setString(glb->fgt->ehp->text, glb->fgt->ehp->str);
    free(str);
}

void update_stats_fgt(t_global *glb)
{
    update_hp_atk(glb);
    update_dodge_def(glb);
    update_ehp(glb);
}
