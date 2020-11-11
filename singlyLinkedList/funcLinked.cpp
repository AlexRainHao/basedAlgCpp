//
// Created by AlexRain on 2020/10/10.
//

//增删改查

# include "utils.h"

void insert_by_position(LinkList &L, int i, int e){
    // backward insert by position id
    if (i < 0)
        cout << "insert failed" << endl;
    else{
        LNode *p;
        int j = 0;
        p = L;

        while(p != nullptr && j < i){
            p = p->next;
            j++;
        }

        if (p == nullptr)
            cout << "insert failed" << endl;
        else{
            LNode *s = new LNode;
            s->element = e;
            s->next = p->next;
            p->next = s;
            cout << "insert done" << endl;
        }
    }
}

void insert_by_node(LNode *p, int e){
    // backward insert element followed from given node
    if (p == nullptr)
        cout << "insert failed" << endl;

    LNode *s = new LNode;
    s->element = e;
    s->next = p->next;
    p->next = s;
    cout << "insert done" << endl;

}

//LinkList insert_forward_by_node(LNode *p, int e){
//    // forward insert with O(n)
//    LinkList L;
//    initList(L);
//
//    while (p->next != nullptr){
//        L->next = p;
//        p = p->next;
//    }
//
//    LNode *s = new LNode;
//
//    s->element = e;
//    s->next = L->next;
//    L->next = s;
//    cout << "forward insert done" << endl;
//
//    return L;
//}

void insert_forward_by_node(LNode *p, int e){
//    forward insert with O(1)

    LNode *s = new LNode;

    s->next = p->next;
    p->next = s;
    s->element = p->element;
    p->element = e;

    cout << "forwrd insert done" << endl;
}

void delete_by_position(LinkList &L, int i){
    // delete by position id
    if (i < 0){
        cout << "delete failed" << endl;
        return;
    }

    LNode *p;
    int j = 0;
    p = L;

    while (p != nullptr && j < i){
        p = p->next;
        j++;
    }

    if (p == nullptr){
        cout << "delete failed" << endl;
        return;
    }

    cout << p->element << endl;

    if (p->next == nullptr){
        cout << "delete failed" << endl;
        return;
    }

    LNode *s = p->next;
    p->next = s->next;
    cout << "delete done" << endl;
}

void show_all_linklist(LinkList &L){
    LNode *p;
    p = L;

    while (p != nullptr){
        cout << p->element << endl;
        p = p->next;
    }
}