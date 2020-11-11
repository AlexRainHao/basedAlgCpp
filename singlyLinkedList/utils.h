//
// Created by AlexRain on 2020/10/10.
//

#ifndef THEALG_UTILS_H
#define THEALG_UTILS_H

#endif //THEALG_UTILS_H

# include <iostream>
using namespace std;

typedef struct LNode{
    int element;
    struct LNode *next;
} LNode, *LinkList;

void test_init();
LinkList initList(LinkList &L);
void insert_by_position(LinkList &L, int i, int e);
void insert_by_node(LNode *p, int e);
void insert_forward_by_node(LNode *p, int e);
void delete_by_position(LinkList &L, int i);
void show_all_linklist(LinkList &L);

