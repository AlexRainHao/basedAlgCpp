//
// Created by AlexRain on 2020/10/10.
//

//增删改查

# include "utils.h"

void insert_by_position(LinkList &L, int i, int e){
    if (i < 1)
//        return false;
        cout << "failed" << endl;

    LNode *p;
    int j = 0;
    p = L;

    while(p != nullptr && j < i - 1){
        p = p->next;
        j++;
    }

    if (p == nullptr)
//        return false;
        cout << "failed" << endl;

    LNode *s = new LNode;
    s->element = e;
    s->next = p->next;
    p->next = s;
//    return true;
    cout << "successfully" << endl;
}