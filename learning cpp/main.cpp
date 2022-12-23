#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;

int Plus(int temp1, int temp2){
    return temp1+temp2;
}

int main(){
    vector<int>A = {1,2,3,4,5,6,7,8,9,10};
    vector<int>B = {10,11,12,13,14,15,16,17,18,19};
    vector<int>C(10);
    transform(A.begin(), A.end(), B.begin(), C.begin(), Plus);
    print(C);
}
