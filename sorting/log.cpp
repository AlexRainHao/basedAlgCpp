//
// Created by AlexRain on 2020/7/27.
//

#include <iostream>
#include <vector>
using namespace std;


void LogVector(vector<int> &vector, char* name){
    cout << name << endl;
    for (auto x: vector)
        cout << x << endl;
}