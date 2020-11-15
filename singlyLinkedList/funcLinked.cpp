//
// Created by AlexRain on 2020/10/10.
//

//增删改查

# include "utils.h"
/*==========
insert
==========*/
namespace singlyLinkedList {
    void insertByIndex(LNode *p, int e) {
        LNode *s = new LNode;
        s->element = e;
        s->next = p->next;
        p->next = s;
    }

    LNode *searchNode(LNode *p, int i) {
        int j = 0;

        while (p != nullptr && j < i) {
            p = p->next;
            j++;
        }

        return p;
    }

    void insert_by_position(LinkList &L, int i, int e) {
        // backward insert by position id
        if (i < 0) {
            cout << "insert failed" << endl;
            return;
        }
        LNode *p;
        p = L;

        p = searchNode(p, i);

        if (p == nullptr) {
            cout << "insert failed" << endl;
            return;
        }

        insertByIndex(p, e);

        cout << "insert done" << endl;
    }

    void insert_by_node(LNode *p, int e) {
        // backward insert element followed from given node
        if (p == nullptr) {
            cout << "insert failed" << endl;
            return;
        }

        insertByIndex(p, e);
        cout << "insert done" << endl;

    }

    void insert_forward_by_node(LNode *p, int e) {
//    forward insert with O(1)

        LNode *s = new LNode;

        s->next = p->next;
        p->next = s;
        s->element = p->element;
        p->element = e;

        cout << "forwrd insert done" << endl;
    }

/*==========
delete
==========*/

    void delete_by_position(LinkList &L, int i) {
        // delete by position id
        if (i < 0) {
            cout << "delete failed" << endl;
            return;
        }

        LNode *p;
        p = L;

        p = searchNode(p, i);

        if (p == nullptr) {
            cout << "delete failed" << endl;
            return;
        }

        if (p->next == nullptr) {
            cout << "delete failed" << endl;
            return;
        }

        LNode *s = p->next;
        p->next = s->next;
        cout << "delete done" << endl;
    }

    void delete_by_node(LNode *p) {

        if (p->next == nullptr) {
            cout << "delete failed" << endl;
            return;
        }

        LNode *q = p->next;

        p->element = p->next->element;
        p->next = q->next;

        cout << "delete done" << endl;
    }

/*==========
modify
==========*/
    void modify_from_position(LinkList &L, int i, int e) {
        if (i < 0) {
            cout << "modify failed" << endl;
            return;
        }

        LNode *p;
        p = L;

        p = searchNode(p, i);

        if (p == nullptr) {
            cout << "modify failed" << endl;
            return;
        }

        p->element = e;
        cout << "modify done" << endl;
    }

    void modify_from_node(LNode *p, int e) {
        if (p == nullptr) {
            cout << "modify failed" << endl;
        }

        p->element = e;
        cout << "modify done" << endl;
    }

/*==========
search
==========*/
    int search_from_position(LinkList &L, int i) {
        if (i < 0) {
            cout << "search failed" << endl;
            return -1;
        }

        LNode *p;
        p = L;

        p = searchNode(p, i);

        if (p == nullptr) {
            cout << "search failed" << endl;
            return -1;
        }

        return p->element;
    }

    int search_from_node(LNode *p) {

        if (p == nullptr) {
            cout << "search failed" << endl;
            return -1;
        }

        return p->element;
    }

    LNode *search_from_val(LinkList &L, int e) {
        LNode *p = L->next;

        while (p != nullptr && p->element != e) {
            p = p->next;
        }

        if (p == nullptr)
            cout << "search failed" << endl;

        cout << "search done" << endl;
        return p;
    }

    int Length(LinkList &L) {
        int len = 1;
        LNode *p = L;

        while (p->next != nullptr) {
            p = p->next;
            len++;
        }
        return len;
    }

    void show_all_linklist(LinkList &L) {
        LNode *p;
        p = L;

        while (p != nullptr) {
            cout << p->element << endl;
            p = p->next;
        }
    }
}