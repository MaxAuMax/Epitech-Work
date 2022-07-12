/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** load_map.c
*/

#include "my.h"

void create_en1(t_global *global, int i, int count)
{
    t_sprite *sprite = malloc(sizeof(*sprite));

    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("files/enemies/wizard.png", NULL);
    sprite->rect.left = 242;
    sprite->rect.top = 19;
    sprite->rect.width = 66;
    sprite->rect.height = 42;
    sprite->pos = (sfVector2f){i * 150, 800};
    sprite->scale = (sfVector2f){3.5, 3.5};

    sfSprite_setPosition(sprite->sp, sprite->pos);
    sfSprite_setScale(sprite->sp, sprite->scale);
    sfSprite_setTexture(sprite->sp, sprite->texture, sfFalse);
    global->enemies[count] = sprite;
}

void analyse_map(t_global *global, char *map)
{
    int count = 0;
    int enmy = 0;
    global->len = 0;

    for (int y = 0; map[y] != '.'; y++) {
        if (map[y] == '1' || map[y] == '2')
            enmy++;
    }

    global->enemies = malloc(sizeof(t_sprite *) * enmy);

    for (int i = 0; map[i] != '.'; i++) {
        if (map[i] == '1') {
            create_en1(global, i, count);
            count++;
        }
    }
    global->len = count;
}
