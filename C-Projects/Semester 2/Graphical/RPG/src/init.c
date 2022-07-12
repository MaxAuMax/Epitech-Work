/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init.c
*/

#include "rpg.h"

t_sprite *create_object(sfVector2f pos, sfIntRect rect,
sfTexture *txtr, sfVector2f sc)
{
    t_sprite *obj = malloc(sizeof(*obj));
    obj->rect = rect;
    obj->sp = sfSprite_create();
    obj->txtr = txtr;
    obj->pos = pos;
    obj->scale = sc;
    sfSprite_setPosition(obj->sp, obj->pos);
    sfSprite_setTexture(obj->sp, obj->txtr, 0);
    sfSprite_setTextureRect(obj->sp, obj->rect);
    sfSprite_scale(obj->sp, sc);
    return (obj);
}

t_perso *init_player(void)
{
    t_perso *player = malloc(sizeof(t_perso));
    player->clk = sfClock_create();
    player->w = sfTexture_createFromFile("assets/char/hero.png", NULL);
    player->l = sfTexture_createFromFile("assets/char/lumber.png", NULL);
    player->m = sfTexture_createFromFile("assets/char/mage.png", NULL);
    player->player = create_object((sfVector2f){1920/2, 1080/2},
    (sfIntRect){0, 0, 30, 42}, player->w, (sfVector2f){2, 2});
    player->walk = sfClock_create();
    player->x = 3600;
    player->y = 4000;
    return (player);
}

t_sprite *init_map(sfTexture *txtr)
{
    t_sprite *map = malloc(sizeof(t_sprite));
    map = create_object((sfVector2f){-2800 + 1920/2, -4570 + 1080/2},
    (sfIntRect){0, 0, 11520, 6480},
    txtr, (sfVector2f){1, 1 });
    return (map);
}

t_fx *init_fx(void)
{
    t_fx *fx = malloc(sizeof(t_fx));
    sfTexture *txtr = sfTexture_createFromFile("assets/fx/fade_dark.png",
        NULL);
    fx->fade_dark = create_object((sfVector2f){1920/2, 1080/2},
    (sfIntRect){1920 * 3, 0, 1920, 1080},
    txtr, (sfVector2f){1, 1});
    return (fx);
}
