//
// Created by AlexRain on 2020/8/1.
//

#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

int partition(vector<int> &sub_array, int start, int end){
    int pivot = sub_array[start];
    int i = start;

    for (int j = start + 1; j < end; j++){
        if (sub_array[j] <= pivot) {
            i++;
            swap(sub_array[i], sub_array[j]);
        }
    }
    swap(sub_array[i], sub_array[start]);
    return i;
}


void _quick_sort(vector<int> &sub_array, int start, int end){
    if (start < end){
        int p = partition(sub_array, start, end);
        _quick_sort(sub_array, start, p);
        _quick_sort(sub_array, p + 1, end);
    }
}


void quick_sort(){
    vector<int> oriArray;
    for(int i = 0; i < 20; i++)
        oriArray.push_back(rand() % 100);

    LogVector(oriArray, "before");
    _quick_sort(oriArray, 0, oriArray.size());

    LogVector(oriArray, "quick sort...");

}