//
// Created by AlexRain on 2020/7/27.
//

#include <iostream>
#include <vector>
using namespace std;

namespace sorting {

    void LogVector(vector<int> &vector, char *name) {
        cout << name << endl;
        for (int x: vector)
            cout << x << ", ";
        cout << endl;
    }
}