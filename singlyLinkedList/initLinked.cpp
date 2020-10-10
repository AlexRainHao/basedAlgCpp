//
// Created by AlexRain on 2020/10/10.
//

# include "utils.h"
LinkList initList(LinkList &L){
    L = new LNode;

    L->next = nullptr;
//    return true;
    return L;
}

void test_init(){
    LinkList L; // create pointer assign to LNode
    initList(L);
    cout << "create link list successfully" << endl;
}