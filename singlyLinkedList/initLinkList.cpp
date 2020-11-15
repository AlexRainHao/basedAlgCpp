//
// Created by AlexRain on 2020/11/15.
//

# include "utils.h"

namespace singlyLinkedList {
    LinkList initList(LinkList &L) {
        L = new LNode;

        L->next = nullptr;

        return L;
    }

    LinkList tailCreate(int *arr, int size) {
        LinkList L;
        initList(L);

        int i = 0;

        while (i < size) {
            insert_by_position(L, i, *arr);
            i++;
            arr++;
        }
        show_all_linklist(L);

        return L;
    }

    LinkList headCreate(int *arr, int size) {
        LinkList L;
        initList(L);

        int i = 0;

        while (i < size) {
            insert_by_node(L, *arr);
            arr++;
            i++;
        }
        show_all_linklist(L);

        return L;
    }
}