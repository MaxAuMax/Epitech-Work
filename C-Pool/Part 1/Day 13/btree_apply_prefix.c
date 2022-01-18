/*
** EPITECH PROJECT, 2021
** applypre
** File description:
** ..
*/

#include "include/btree.h"

void btree_apply_prefix(btree_t *root , int (* applyf)(void *))
{
    applyf(root->item);
}

void main(void)
{
    btree_t *new = btree_apply_prefix();
}
