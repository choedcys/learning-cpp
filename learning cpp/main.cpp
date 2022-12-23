#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;



bool condition(int temp){
    if(temp % 400 == 0 || temp % 4 == 0 && temp % 100 != 0)
        return true;
    else
        return false;
}

int main(){
    vector<int>year;
    vector<int>::iterator y;
    for(int i = 1990 ; i < 2020 ; i++){
        year.push_back(i);
    }
    y =find_if(year.begin(), year.end(), condition);
    cout<<"1990~2019년 사이의 첫 번째 윤년 : "<< *y<<"년"<<endl;
}
