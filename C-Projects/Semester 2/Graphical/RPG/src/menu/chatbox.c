/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** chatbox.c
*/

#include "rpg.h"

void init_chatbox(t_global *glb)
{
    glb->chatbox = malloc(sizeof(t_sprite));
    glb->chatbox->rect.top = 0;
    glb->chatbox->rect.left = 0;
    glb->chatbox->rect.width = 1920;
    glb->chatbox->rect.height = 1080;

    glb->chatbox->txtr =
    sfTexture_createFromFile("assets/menu/chatbox.png", NULL);
    glb->chatbox->sp = sfSprite_create();
    glb->chatbox->pos = (sfVector2f) {0, 0};
    glb->chatbox->scale = (sfVector2f) {1, 1};
    sfSprite_setTexture(glb->chatbox->sp, glb->chatbox->txtr, sfFalse);
    sfSprite_setTextureRect(glb->chatbox->sp, glb->chatbox->rect);
    sfSprite_setPosition(glb->chatbox->sp, glb->chatbox->pos);
    sfSprite_setScale(glb->chatbox->sp, glb->chatbox->scale);
}

void display_chat(t_global *glb)
{
    if (glb->dsp == false) {
        sfRenderWindow_drawSprite(glb->window->w, glb->chatbox->sp, NULL);
        chatbox1(glb);
    }
    event_box(glb);
    sfRenderWindow_display(glb->window->w);
}

void event_box(t_global *glb)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(glb->window->w, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        if (event.type == sfEvtKeyPressed) {
            if (event.key.code == sfKeySpace) {
                glb->dsp = false;
                if (glb->next_scene == 5) {
                    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
                }
                glb->scene = glb->next_scene;
            }
        }
    }
}
