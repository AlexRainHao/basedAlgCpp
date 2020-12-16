//
// Created by AlexRain on 2020/12/11.
//

#ifndef THEALG_UTILS_H
#define THEALG_UTILS_H

#endif //THEALG_UTILS_H

#include <iostream>
#include <string>
using namespace std;

typedef struct DNode{
    int element;
    struct DNode *fw, *bw;
} DNode, *DLinkList;

namespace dualLinkedList{
    static void initList(DLinkList &D){
        /*initialize dual linked list*/
        D = new DNode;
        D->fw = nullptr;
        D->bw = nullptr;
    };

    void insert_fw_dnode(DNode *p, DNode *s);
    void insert_bw_dnode(DNode *p, DNode *s);
    void delete_fw_dnode(DNode *p);
    void delete_linklist(DLinkList &D);
    void show_fw_all_linklist(DLinkList &D);
    void show_bw_all_linklist(DLinkList &D);

    static void test_dual_linklist_case(){
        int arr[] = {1, 2, 3, 4, 5, 6};
        int size = sizeof(arr) / sizeof(arr[0]);
        DLinkList D;
        initList(D);

        for(int i = 0; i<size; i++){
            DNode *s = new DNode;
            s->element = arr[i];
            insert_fw_dnode(D, s);
        }
        show_fw_all_linklist(D);
    }
}
