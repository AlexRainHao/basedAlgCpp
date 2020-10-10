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