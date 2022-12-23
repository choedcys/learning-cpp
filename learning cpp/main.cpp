#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;



struct Tag{
    string name;
    int age;
};

bool func(Tag temp1, Tag temp2){
    return temp1.age < temp2.age;
}
int main(){
    vector<Tag> T = {{"ccc", 30}, {"aaa", 10}, {"bbb",10}, {"ddd", 40}, {"eee", 50}, {"aaa", 20}};
    sort(T.begin(), T.end(), func);
    vector<Tag>::iterator it = T.begin();
    for( ; it != T.end() ; it++){
        cout<< it->name<<" "<< it->age<<endl;
    }
}
