//
// Created by AlexRain on 2020/7/27.
//
#include "pch.h"
#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

void selection_sort(){
    vector<int> oriArray = {5, 0, 8, 2, 6, 7};
    int length = oriArray.size();

    for (int i = 0; i < length; i++) {
        int min_ptx = i;
        for (int j = i + 1; j < length; j++) {
            if (oriArray[min_ptx] > oriArray[j])
                min_ptx = j;
        }
        swap(oriArray[min_ptx], oriArray[i]);
    }

    LogVector(oriArray, "selection sort");
}

