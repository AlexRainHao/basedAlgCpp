//
// Created by AlexRain on 2020/7/27.
//

#pragma once

#include <vector>

using namespace std;

namespace sorting {
    void LogVector(vector<int> &vector, char *name);

    void selection_sort();

    void insertion_sort();

    void bubble_sort();

    void mergeSort();

    void shell_sort();

    void mergeSort_Iteration();

    void quick_sort();

    static void test_sorting() {
        selection_sort();
        insertion_sort();
        bubble_sort();
        mergeSort();
        mergeSort_Iteration();
        shell_sort();
        quick_sort();
    }
}