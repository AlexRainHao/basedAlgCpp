//
// Created by AlexRain on 2020/7/31.
//
#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

namespace sorting {

    void merge(vector<int> &sub_vector,
               int start, int mid, int end) {
        int i = start;
        int j = mid + 1;
        int k = 0;

        int *tmp = new int[end - start + 1];

        while (i <= mid && j <= end) {
            if (sub_vector[i] <= sub_vector[j]) {
                tmp[k++] = sub_vector[i++];
            } else {
                tmp[k++] = sub_vector[j++];
            }
        }
        while (i <= mid) {
            tmp[k++] = sub_vector[i++];
        }
        while (j <= end) {
            tmp[k++] = sub_vector[j++];
        }
        for (int i = 0; i < k; i++) {
            sub_vector[start++] = tmp[i];
        }
    }

    void mergeSort_Iteration() {
        vector<int> oriArray;
        for (int i = 0; i < 20; i++)
            oriArray.push_back(rand() % 100);

//    int *tmp = new int[oriArray.size()];

        // merge sort with iteration method

        int length = oriArray.size();
        for (int i = 1; i < length; i += i) {
            int left = 0;
            int mid = left + i - 1;
            int right = mid + i;

            while (right < length) {
                merge(oriArray, left, mid, right);
                left = right + 1;
                mid = left + i - 1;
                right = mid + i;
            }

            if (left < length && mid < length) {
                merge(oriArray, left, mid, length - 1);
            }
        }

        LogVector(oriArray, "merge sort with iteration way...");
    }
}