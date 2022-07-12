/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** free.c
*/

#include "rpg.h"

void destroy_all_music(t_global *glb)
{
    sfMusic_destroy(glb->music->musictuto);
    sfMusic_destroy(glb->music->m_plaine);
    sfMusic_destroy(glb->music->musictav);
    sfMusic_destroy(glb->music->musicaut);
    sfMusic_destroy(glb->music->m_win);
}

void free_fight(t_fight *fgt)
{
    free_tsprite(fgt->bg);
    free_tsprite(fgt->ui_att);
    free_tsprite(fgt->att);
    free_tsprite(fgt->pl);
    free_ttext(fgt->php);
    free_ttext(fgt->patk);
    free_ttext(fgt->pdodge);
    free_ttext(fgt->pdef);
    free(fgt);
}

void free_fx(t_fx *fx)
{
    free_tsprite(fx->fade_dark);
    free_tsprite(fx->snow);
    sfClock_destroy(fx->snow_clk);
    free(fx);
}

void free_next(t_global *glb)
{
    free_pnj(glb->marcel), free_pnj(glb->conor), free_pnj(glb->gege);
    free_fight(glb->fgt), free_fx(glb->fx);
    for (int i = 0; glb->inv_arr_pos[i] != NULL; i++)
        free(glb->inv_arr_pos[i]);
    free(glb->inv_arr_pos);
    sfClock_destroy(glb->c_intro);
    sfClock_destroy(glb->word_clk);
    sfClock_destroy(glb->pnj_clk);
    sfClock_destroy(glb->en_clk);
}

void free_all(t_global *glb)
{
    free_tperso(glb), free_tsprite(glb->intro);
    free_tsprite(glb->fps30), free_tsprite(glb->fps60);
    free_tsprite(glb->fps120), free_tsprite(glb->returnb);
    free_tsprite(glb->music_onb), free_tsprite(glb->sound_onb);
    free_tsprite(glb->tuto_map), free_tsprite(glb->map);
    free_tsprite(glb->aut_map), free_tsprite(glb->win_map);
    free_tsprite(glb->bkg), free_tsprite(glb->htp);
    free_tsprite(glb->play), free_tsprite(glb->quit);
    free_tsprite(glb->setings), free_tsprite(glb->next);
    free_tsprite(glb->previous), free_tsprite(glb->homeb);
    free_tsprite(glb->resumeb), free_tsprite(glb->quitpause);
    free_tsprite(glb->chatbox), free_tsprite(glb->bkghtp);
    free_tsprite(glb->bkgset), free_tsprite(glb->house_inside);
    free_tsprite(glb->chest), free_tsprite(glb->lose);
    free_enemi(glb->skl), free_enemi(glb->org), free_enemi(glb->pumpking);
    free_enemi(glb->tree), free_enemi(glb->pb), free_enemi(glb->snowman);
    sfImage_destroy(glb->tuto_map_bw), sfImage_destroy(glb->map_bw);
    sfImage_destroy(glb->aut_map_bw), sfImage_destroy(glb->win_map_bw);
    sfImage_destroy(glb->house_inside_bw);
    destroy_all_music(glb), free_next(glb);
}
