#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
#include <cstdlib>
#include <ctime>
using namespace std;


bool even(int temp){
    return (temp %2 == 0);
}
int main(){
    vector<int>vec;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 100; ++i)
        {
            vec.push_back(rand());
        }
    cout<<count_if(vec.begin(), vec.end(), even);
}
