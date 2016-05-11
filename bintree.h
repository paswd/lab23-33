#ifndef _BINTREE_H_
#define _BINTREE_H_

#include <stdbool.h>

typedef long long Item;

typedef _bintree Bintree;
typedef _bintree_leave Bintree_leave;

Bintree* bintree_create(void);
void bintree_destroy(Bintree **bintree);
void bintree_push(Bintree *bintree, Item value);
Item bintree_pop(Bintree *bintree);
Item bintree_print(Bintree *bintree);
//void bintree_print_correct(Bintree *bintree);
bool bintree_is_empty(Bintree *bintree);


#endif