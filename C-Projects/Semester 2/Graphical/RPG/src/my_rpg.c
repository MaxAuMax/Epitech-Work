/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** my_rpg.c
*/

#include "rpg.h"

void all_menu(t_global *glb)
{
    init_bkg(glb);
    init_button_play(glb);
    init_button_quit(glb);
    init_button_setings(glb);
    init_button_htp(glb);
    init_next(glb);
    init_previous(glb);
    init_chatbox(glb);
    init_bkghtp(glb);
    init_bkgset(glb);
    create_setting(glb);
    set_setting(glb);
    create_pause(glb);
    set_pause(glb);
}

void launch(t_global *glb)
{
    all_menu(glb);
    glb->fgt = malloc(sizeof(t_fight));
    init_fight(glb);
    glb->music->musictuto = sfMusic_createFromFile("assets/menu/menu.ogg");
    glb->music->m_plaine = sfMusic_createFromFile("assets/menu/plaine.ogg");
    glb->music->musictav = sfMusic_createFromFile("assets/menu/tavern.ogg");
    glb->music->musicaut = sfMusic_createFromFile("assets/menu/aut.ogg");
    glb->music->m_win = sfMusic_createFromFile("assets/menu/winter.ogg");
    sfMusic_play(glb->music->musictuto);
    sfMusic_setVolume(glb->music->musictuto, 50);
    sfMusic_setLoop(glb->music->musictuto, sfTrue);
}

void other_scenes(t_global *glb)
{
    if (glb->scene == 4)
        htp(glb);
    if (glb->scene == 5)
        fight(glb);
    if (glb->scene == 6)
        inventory(glb);
    if (glb->scene == 7)
        display_chat(glb);
    if (glb->scene == 8)
        lose(glb);
    if (glb->scene == 9)
        win(glb);
    if (glb->scene == 84)
        sfRenderWindow_close(glb->window->w);
}

void my_rpg(t_global *glb)
{
    glb->c_intro = sfClock_create();
    glb->word_clk = sfClock_create();
    init_clock_intro(glb);
    launch_intro(glb);
    launch(glb);
    sfSprite_setPosition(glb->player->player->sp, (sfVector2f) {900, 450});
    sfSprite_setScale(glb->player->player->sp, (sfVector2f) {4, 4});
    while (sfRenderWindow_isOpen(glb->window->w)) {
        if (glb->scene == 0)
            menu(glb);
        if (glb->scene == 1)
            game(glb);
        if (glb->scene == 2)
            menu_settings(glb);
        if (glb->scene == 3)
            menu_pause(glb);
        other_scenes(glb);
    }
    free_all(glb);
}
