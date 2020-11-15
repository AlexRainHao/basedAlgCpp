//
// Created by AlexRain on 2020/7/27.
//

#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

namespace sorting {
    void insertion_sort() {
        vector<int> oriArray = {5, 0, 8, 2, 6, 7};
        int length = oriArray.size();

        for (int i = 0; i < length; i++) {
            int tmp = oriArray[i];
            int j = i - 1;
            while (j >= 0 && oriArray[j] > tmp) {
                oriArray[j + 1] = oriArray[j];
                j--;
            }
            oriArray[j + 1] = tmp;
        }

        LogVector(oriArray, "insertion sort");
    }
}