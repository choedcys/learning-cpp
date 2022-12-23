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
    sort(vec.begin(), vec.end());
    cout<<"난수의 최소값: "<<vec[0]<<endl;
    cout<<"난수의 최대값: "<<vec[99]<<endl;
}
