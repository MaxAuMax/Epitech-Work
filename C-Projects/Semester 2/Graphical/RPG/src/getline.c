/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** getline.c
*/

#include "rpg.h"

char *getlinechat(char *file, int size)
{
    char *str = malloc(sizeof(char) * size + 1);
    int fd = open(file, O_RDONLY);
    read(fd, str, size);
    str[size] = '\0';
    return (str);
}

void init_string(t_global *glb)
{
    glb->marcel->str = getlinechat("./src/chat/marcel.txt", 637);
    glb->conor->str = getlinechat("./src/chat/conor.txt", 487);
    glb->gege->str = getlinechat("./src/chat/gege.txt", 713);
    glb->skl->str = getlinechat("./src/chat/skl.txt", 231);
    glb->org->str = getlinechat("./src/chat/org.txt", 202);
    glb->pumpking->str = getlinechat("./src/chat/pumpkin.txt", 268);
    glb->tree->str = getlinechat("./src/chat/tree.txt", 189);
    glb->pb->str = getlinechat("./src/chat/pb.txt", 155);
    glb->snowman->str = getlinechat("./src/chat/snowman.txt", 142);
}
