//
// Created by AlexRain on 2020/7/27.
//

//
// Created by AlexRain on 2020/7/27.
//

#include "auxFunc.h"
#include <iostream>
#include <vector>

using namespace std;

void _reConstruct(vector<int> &sub_vector, int temp[],
                  int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end) {
        if (sub_vector[i] <= sub_vector[j]) {
            temp[k] = sub_vector[i];
            i++;
        } else {
            temp[k] = sub_vector[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        temp[k++] = sub_vector[i++];
    }
    while (j <= end) {
        temp[k++] = sub_vector[j++];
    }

    for (int i = 0; i < k; i++){
        sub_vector[start + i] = temp[i];
    }
}

void _merge_sort(vector<int> &sub_vector, int tmp[],
        int start, int end){

//    void _reConstruct(vector<int> a, vector<int> b, int start, int mid, int end);

    if (start < end){
        int mid = (start + end) / 2;
        _merge_sort(sub_vector, tmp, start, mid);
        _merge_sort(sub_vector, tmp, mid + 1, end);
        _reConstruct(sub_vector, tmp, start, mid, end);
    }
}


void mergeSort(){

//    void _merget_sort(vector<int> a, vector<int> b, int start, int end);

    vector<int> oriArray;
    vector<int> resArray;
    // generate random numbers less than 100
//    for (int i = 0; i < 20; i++) {
//        oriArray.push_back(rand() % 100);
//        resArray.push_back(0);
//    }
    oriArray = {5, 0, 8, 2, 6, 7};
    int *temp = new int[oriArray.size()];

    _merge_sort(oriArray, temp, 0, oriArray.size() - 1);

    LogVector(oriArray, "merge sort...");
}