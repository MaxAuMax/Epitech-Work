/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** inevntory.c
*/

#include "rpg.h"

void equip(t_global *glb, char p, int x, sfVector2i mp)
{
    if (glb->inv_arr[glb->g_stky][glb->g_stkx] == p &&
    mp.x > glb->player->inv->pos.x + 144 * x &&
    mp.x < glb->player->inv->pos.x + 144 * (x+1) &&
    mp.y > glb->player->inv->pos.y + 144 &&
    mp.y < glb->player->inv->pos.y + 288) {
        glb->grab = false;
        sfSprite_setPosition(glb->player->i_sel->sp,
        (sfVector2f){30000, 30000});
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->i_sel->sp, NULL);
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->inv->sp, NULL);
        char c = glb->inv_arr[glb->g_stky][glb->g_stkx];
        glb->inv_arr[glb->g_stky][glb->g_stkx] = glb->inv_bar[x - 1];
        glb->inv_bar[x - 1] = c;
    }
}

void nav_inv(t_global *glb, sfVector2i mp)
{
    if (mp.y > glb->player->inv->pos.y + 144 &&
    mp.y < glb->player->inv->pos.y + 144 * 2)
        glb->player->inv->rect.left = 0;
    if (mp.y > glb->player->inv->pos.y + 144 * 2 &&
    mp.y < glb->player->inv->pos.y + 144 * 3)
        glb->player->inv->rect.left = 144*5;
    if (mp.y > glb->player->inv->pos.y + 144 * 3 &&
    mp.y < glb->player->inv->pos.y + 144 * 4)
        glb->player->inv->rect.left = 144*10;
}

void inv_event(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed) glb->scene = 84;
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) glb->scene = 1,
        sfRenderWindow_setMouseCursorVisible(glb->window->w, sfFalse);
        if (sfKeyboard_isKeyPressed(sfKeyI)) glb->scene = 1,
        sfRenderWindow_setMouseCursorVisible(glb->window->w, sfFalse);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfVector2i mp = sfMouse_getPositionRenderWindow(glb->window->w);
            if (mp.x > glb->player->inv->pos.x &&
            mp.x < glb->player->inv->pos.x + 144) {
                nav_inv(glb, mp);
            }
            if (glb->grab) put_down(glb, mp);
            else pick_up(glb, mp);
        }
    }
}

void inventory(t_global *glb)
{
    sfSprite_setScale(glb->player->armor->sp, (sfVector2f){3, 3});
    inv_event(glb);
    if (glb->selct == 0) glb->player->inv->rect.top = 0;
    else if (glb->selct == 2) glb->player->inv->rect.top = 144*5;
    else if (glb->selct == 1) glb->player->inv->rect.top = 144*10;
    sfSprite_setTextureRect(glb->player->inv->sp, glb->player->inv->rect);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->inv->sp, NULL);
    if (glb->player->inv->rect.left == 0) {
        if (glb->grab)
            sfRenderWindow_drawSprite(glb->window->w,
            glb->player->i_sel->sp, NULL);
        draw_inv(glb);
        draw_inv_bar(glb);
    } else if (glb->player->inv->rect.left == 720 * 2) {
        draw_stats(glb);
    }
    sfRenderWindow_display(glb->window->w);
}
