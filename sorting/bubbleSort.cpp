//
// Created by AlexRain on 2020/7/27.
//

#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

void bubble_sort(){
    vector<int> oriArray = {5, 0, 8, 2, 6, 7};
    for (int i = oriArray.size() - 1; i > 0; i--){
        bool swap_flag = false;
        for (int j = 0; j < i; j++){
            if (oriArray[j] > oriArray[j+1]){
                swap(oriArray[j], oriArray[j+1]);
                swap_flag = true;
            }
        }
        if (swap_flag == false)
            break;
    }

    LogVector(oriArray, "bubble sort");
}