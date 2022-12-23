#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;



int main(){
    vector<int> vec = {5,3,1,2,3,4};
    vector<int>::iterator it = vec.begin();
    vector<int>::iterator cursor;
    while(it <= vec.end()){
        cursor = find(it, vec.end(), 3);
        it += distance(vec.begin(), cursor);
        cout<<3<<"은"<<distance(vec.begin(), cursor)+1<<"번째 원소"<<endl;
        it++;
    }
}
