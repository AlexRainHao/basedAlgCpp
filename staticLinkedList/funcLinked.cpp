//
// Created by AlexRain on 2020/12/14.
//

# include "utils.h"

/*only insert by position show*/

namespace staticLinkedList {

    bool is_empty(SNode *s) {
        bool is_empty = true;

        for (int i = 0; i < MAXSIZE; i++) {
            if ((s + i)->next > 0) {
                is_empty = false;
                break;
            }
        }

        return is_empty;
    }

    bool is_full(SNode *s) {
        bool is_full = false;
        int pos = 0;

        for (int i = 0; i < MAXSIZE; i++) {
            if ((s + i)->next > 0)
                pos++;
        }

        if (pos == MAXSIZE - 1)
            is_full = true;

        return is_full;
    }

    int get_len(SNode *s) {
        int size = 0;
        for (int i = 0; i < MAXSIZE; i++) {
            if ((s + i)->next > 0)
                size++;
        }

        return size;
    }

    int apply_node(SNode *s) {
        if (is_empty(s))
            return 0;

        if (is_full(s))
            return -1;

        for (int i = 0; i < MAXSIZE; i++) {
            if ((s + i)->next < 0)
                return i;
        }

        return -1;
    }

    void insert_by_position(SNode *s, int p, int val) {
        if (p <= 0 | p >= MAXSIZE) {
            cout << "position assigned must during (0, 10)\n";
            return;
        }

        if (is_full(s)) {
            cout << "linked list full\n";
            return;
        }

        if (is_empty(s) && p != 1) {
            cout << "linked list is empty\n";
            return;
        }

        if (is_empty(s) && p == 1) {
            s->next = 1;
            (s + 1)->element = val;
            (s + 1)->next = -1;
            cout << "insert done\n";
            return;
        }

        // apply a node
        int insert_p = apply_node(s);

        // find fore-node position
        for (int i = 0; i < MAXSIZE; i++) {
            if ((s + i)->next == -1) {
                (s + i)->next = insert_p;
            }
        }

        (s + insert_p)->element = val;
        (s + insert_p)->next = -1;

        cout << "insert done\n";
    }
}