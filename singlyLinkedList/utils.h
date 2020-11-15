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

namespace singlyLinkedList {
    LinkList initList(LinkList &L);

    void insert_by_position(LinkList &L, int i, int e);

    void insert_by_node(LNode *p, int e);

    void insert_forward_by_node(LNode *p, int e);

    void delete_by_position(LinkList &L, int i);

    void delete_by_node(LNode *p);

    void modify_from_position(LinkList &L, int i, int e);

    void modify_from_node(LNode *p, int e);

    int search_from_position(LinkList &L, int i);

    int search_from_node(LNode *p);

    LNode *search_from_val(LinkList &L, int e);

    int Length(LinkList &L);

    void show_all_linklist(LinkList &L);

    LinkList tailCreate(int *arr, int size);

    LinkList headCreate(int *arr, int size);

    static void test_singly_linkelist_case() {
        int arr[] = {1, 2, 3, 4, 5, 6};
        int size = sizeof(arr) / sizeof(arr[0]);

        tailCreate(arr, size);
    }
}


