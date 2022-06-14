//
//  btree.h
//  Modul13
//
//  Created by Ariq Heritsa on 14/06/22.
//

#ifndef btree_h
#define btree_h

#include <iostream>

using namespace std;

#define nil NULL
#define info(p) p->info
#define left(p) p->left
#define right(p) p->right

using namespace std;

typedef int infotype;
typedef struct node *address;

struct node {
  infotype info;
  address left, right;
};

// Terbimbing
address allocation(infotype x);
void insertBST(address &root, address n);
void inOrder(address root);
address findNode(address root, infotype x);
int countInternalNode(address root);
void printLeaves(address root);
int countLeaves(address root);

// Mandiri
void buildTree(address &root);
int maxNumber(address &root);
void preOrder(address root);
void postOrder(address root);

#endif /* btree_h */
