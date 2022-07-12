/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** main.c
*/

#include "rpg.h"

void init_all_map(t_global *glb)
{
    glb->tuto_map_bw = sfImage_createFromFile("assets/map/map_tuto_bw.png");
    glb->map_bw = sfImage_createFromFile("assets/map/map_test_bw.png");
    glb->aut_map_bw = sfImage_createFromFile("assets/map/map_au_bw.png");
    glb->win_map_bw = sfImage_createFromFile("assets/map/map_hiver_bw.png");
    glb->tuto_map = init_map((sfTexture *)
    sfTexture_createFromFile("assets/map/map_tuto.png", NULL));
    glb->map = init_map((sfTexture *)
    sfTexture_createFromFile("assets/map/map_test.png", NULL));
    glb->aut_map = init_map((sfTexture *)
    sfTexture_createFromFile("assets/map/map_au.png", NULL));
    glb->win_map = init_map((sfTexture *)
    sfTexture_createFromFile("assets/map/map_hiver.png", NULL));
    glb->int_map = 0;
    glb->map->pos.x = -3600 + 1920/2;
    glb->map->pos.y = -4000 + 1080/2;
}

void init_bw(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/room/inside.png", NULL);
    glb->house_inside = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, txtr, (sfVector2f){1, 1});
    glb->cur_map = glb->tuto_map->sp;
    glb->cur_map_bw = glb->tuto_map_bw;
    glb->inside = false;
    glb->house_inside_bw = sfImage_createFromFile("assets/room/inside_bw.png");
    sfTexture *txtrs =
    sfTexture_createFromFile("assets/obj/chests.png", NULL);
    glb->chest = create_object((sfVector2f){-10000, -10000},
    (sfIntRect){0, 0, 576, 720}, txtrs, (sfVector2f){1, 1});
    glb->skin = 0;
    glb->show_inv = false;
    glb->nbclikc = 0;
}

void malloc_all(t_global *glb)
{
    glb->bkg = malloc(sizeof(t_sprite));
    glb->htp = malloc(sizeof(t_sprite));
    glb->play = malloc(sizeof(t_sprite));
    glb->quit = malloc(sizeof(t_sprite));
    glb->setings = malloc(sizeof(t_sprite));
    glb->music_onb = malloc(sizeof(t_sprite));
    glb->sound_onb = malloc(sizeof(t_sprite));
    glb->fps30 = malloc(sizeof(t_sprite));
    glb->fps60 = malloc(sizeof(t_sprite));
    glb->fps120 = malloc(sizeof(t_sprite));
    glb->returnb = malloc(sizeof(t_sprite));
    glb->homeb = malloc(sizeof(t_sprite));
    glb->resumeb = malloc(sizeof(t_sprite));
    glb->quitpause = malloc(sizeof(t_sprite));
    glb->next = malloc(sizeof(t_sprite));
    glb->previous = malloc(sizeof(t_sprite));
    glb->music = malloc(sizeof(t_music));
}

t_global *init_glb(void)
{
    t_global *glb = malloc(sizeof(t_global));
    glb->window = malloc(sizeof(t_window));
    glb->window->video = (sfVideoMode){1920, 1080, 32};
    glb->window->color = (sfColor){0, 0, 0};
    glb->window->w = sfRenderWindow_create(glb->window->video,
    "My_RPG", sfClose | sfResize, NULL);
    init_win_lose(glb);
    init_pnj(glb);
    init_all_pnj(glb);
    init_all_enemis(glb);
    init_string(glb);
    init_player_stats(glb);
    init_all_map(glb);
    creat_inv(glb);
    init_bw(glb);
    init_inv(glb);
    init_snow(glb);
    return (glb);
}

int main(int ac, char **av)
{
    t_global *glb = init_glb();
    malloc_all(glb);
    sfRenderWindow_setFramerateLimit(glb->window->w, 60);
    my_rpg(glb);
    return (0);
}
