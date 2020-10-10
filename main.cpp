#include <iostream>
#include "./sorting/auxFunc.h"
#include "./singlyLinkedList/utils.h"

using namespace std;
extern void test();
int main() {
//    selection_sort();
//    insertion_sort();
//    bubble_sort();
//mergeSort();
//	shell_sort();
//    mergeSort_Iteration();
//    quick_sort();
    LinkList L;
    initList(L);
    insert_by_position(L, 1, 5);
    return 0;
}
