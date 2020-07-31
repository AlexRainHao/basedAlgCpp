#include <iostream>
#include <vector>
#include "auxFunc.h"

using namespace std;

void shell_sort() {
	//generate random numbers less than 100
	vector<int> oriArray;
    for (int i = 0; i < 20; i++) {
        oriArray.push_back(rand() % 100);
    }

	int length = oriArray.size();
	for (int i = length / 2; i > 0; i /= 2) {
		for (int j = i; j < length; j++) {
			for (int k = j - i; k >= 0; k = k - i) {
				if (oriArray[k] < oriArray[k + i])
					break;
				else {
					swap(oriArray[k], oriArray[k + i]);
				}
			}
		}
	}
	LogVector(oriArray, "shell sort...");
}