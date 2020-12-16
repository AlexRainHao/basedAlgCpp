//
// Created by AlexRain on 2020/12/14.
//

#ifndef THEALG_UTILS_H
#define THEALG_UTILS_H

#endif //THEALG_UTILS_H

#include <iostream>
using namespace std;

const int MAXSIZE = 10;

typedef struct SNode {
    int element;
    int next = -2;
} SNode;

namespace staticLinkedList{
    static SNode *initList(){
        /*initialize static linked list*/
//        static SNode S[MAXSIZE];
//        SNode *p = S;
        SNode *p = new SNode[MAXSIZE];
        p->next = -1;

        return p;
    }

    static SNode *geneTestCase(){
        /*random generate a linked list*/
        int pit[6] = {0, 2, 6, 3, 5, 9};
        int val[5] = {11, 12, 13, 14, 15};
        SNode *s = initList();

        int i = 0;
        while(i < 5) {
            (s + pit[i])->next = pit[i + 1];
            (s + pit[i + 1])->element = val[i];
            i++;
        }

        (s + pit[i])->next = -1;
        return s;
    }

    static void showLinkLisk(SNode *s){
        for (int i = 0; i < MAXSIZE; i++)
            cout << (s + i)->element << " ";
        cout << endl;

        for (int i = 0; i < MAXSIZE; i++)
            cout << (s + i)->next << " ";
        cout << endl;
    }

    void insert_by_position(SNode *s, int p, int val);
    int get_len(SNode *s);

    static void test_static_linlist_case(){
        SNode *s = staticLinkedList::geneTestCase();
        showLinkLisk(s);
        cout << "length\t" << get_len(s) << endl;
        staticLinkedList::insert_by_position(s, 1, 27);
        showLinkLisk(s);
        cout << "length\t" << get_len(s) << endl;
    }
}

