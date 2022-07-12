/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** events.c
*/

#include "rpg.h"

void event_hover(t_global *glb, sfVector2i mouse)
{
    bool hov = false;
    if (hov == false && mouse.x >= 310 && mouse.x <= 640 &&
    mouse.y >= 266 && mouse.y <= 380)
        glb->fgt->ui_att->rect.left = 1638, hov = true, first_attack(glb);
    if (hov == false && mouse.x >= 117 && mouse.x <= 447 &&
    mouse.y >= 539 && mouse.y <= 653)
        glb->fgt->ui_att->rect.left = 2457, hov = true, scnd_attack(glb);
    if (hov == false && mouse.x >= 510 && mouse.x <= 840 &&
    mouse.y >= 539 && mouse.y <= 653)
        glb->fgt->ui_att->rect.left = 3276, hov = true, third_attack(glb);
    if (hov == false)
        glb->fgt->ui_att->rect.left = 819;
}

void att_pressed(t_global *glb, sfVector2i mouse)
{
    glb->fgt->att->rect.left = 432;
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (glb->fgt->ui_att->rect.left == 0)
            glb->fgt->ui_att->rect.left = 819;
        else
            glb->fgt->ui_att->rect.left = 0;
    }
}

void pl_pressed(t_global *glb, sfVector2i mouse)
{
    if (mouse.x >= 1233 && mouse.x <= 1233 + 432 &&
        mouse.y >= 780 && mouse.y <= 780 + 144)
        glb->fgt->pl->rect.left = 432;
    else
        glb->fgt->pl->rect.left = 0;
}

bool event_fight(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w,
        &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            return (true);
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(glb->window->w);
        if (glb->atk_turn == true && mouse.x >= 263 && mouse.x <= 263 + 432 &&
            mouse.y >= 780 && mouse.y <= 780 + 144)
            att_pressed(glb, mouse);
        else
            glb->fgt->att->rect.left = 0;
        if (glb->fgt->ui_att->rect.left != 0)
            event_hover(glb, mouse);
        pl_pressed(glb, mouse);
    }
    return (false);
}
