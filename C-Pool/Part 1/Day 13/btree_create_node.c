/*
** EPITECH PROJECT, 2021
** btree
** File description:
** ..
*/

#include "include/btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *nod = malloc(sizeof(btree_t));
    nod->item = item;
    nod->left = 0;
    nod->right = 0;
    return (nod);
}
