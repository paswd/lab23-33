#ifndef _BINTREE_H_
#define _BINTREE_H_

#include <stdbool.h>

typedef long long Item;

typedef _bintree Bintree;
//typedef _bintree_leave Bintree_leave;

Bintree* bintree_create(Item value);
void bintree_destroy(Bintree **bintree);
void bintree_push(Bintree *root, Item value);
Item bintree_pop(Bintree *root, Item value);
Item bintree_print(Bintree *bintree);
Item bintree_min(Bintree *root);
Item bintree_max(Bintree *root);
//void bintree_print_correct(Bintree *bintree);
//bool bintree_is_empty(Bintree *bintree);
Bintree *bintree_get_branch_left(Bintree *root);
Bintree *bintree_get_branch_right(Bintree *root);
Item bintree_get_value(Bintree *root);

#endif
