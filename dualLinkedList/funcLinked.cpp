//
// Created by AlexRain on 2020/12/11.
//

# include "utils.h"
# include <stdio.h>

/*only insert, delete, and lookup method showed*/

namespace dualLinkedList {
    void insert_fw_dnode(DNode *p, DNode *s){
        if (p == nullptr || s == nullptr){
            printf("source or target node empty\n");
            return;
        }

        s->fw = p->fw;

        if (p->fw != nullptr)
            p->fw->bw = s;

        s->bw = p;
        p->fw = s;
        printf("insert fw node done\n");
    }

    void insert_bw_dnode(DNode *p, DNode *s){
        if (p == nullptr || s == nullptr){
            printf("source or target node empty\n");
            return;
        }

        DNode *l = p->bw;
        insert_fw_dnode(l, s);
        printf("insert bw node done\n");
    }


    void delete_fw_dnode(DNode *p){
        DNode *q = p->fw;

        if (p == nullptr || q == nullptr){
            printf("source or as last node\n");
            return;
        }

        p->fw = q->fw;
        if (q->fw != nullptr){
            q->fw->bw = p;
        }

        delete q;
        printf("delete fw node done\n");
    }

    void delete_linklist(DLinkList &D){
        while (D->fw != nullptr)
            delete_fw_dnode(D);

        delete D;
        printf("delete dual linklist done\n");
    }

    void show_fw_all_linklist(DLinkList &D){
        DNode *p = D;
        while (p != nullptr){
            cout << p->element << endl;
            p = p->fw;
        }
        printf("show fw dual linklist done\n");
    }

    void show_bw_all_linklist(DLinkList &D){
        DNode *p = D;
        while (p->fw != nullptr){
            p = p->fw;
        }
        while (p != nullptr){
            cout << p->element << endl;
            p = p->bw;
        }
        printf("show bw dual linklist done\n");
    }

}









