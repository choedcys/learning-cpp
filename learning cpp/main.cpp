#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;


#include <string>

bool condition(int temp){
    return temp % 2 == 1;
}
int main(){
    string X;
    int i = 0;
    int count = 0;
    string tmp="";
    vector<string> vec;
    vector<string>::iterator it;
    cout<<"문장을 입력하세요"<<endl;
    getline(cin, X);
    while(i < X.length()){
        if(X.at(i) != ' ' && i != X.length()-1){
            tmp+=X.at(i);
        }
        else if(i == X.length()-1){
            tmp += X.at(i);
            vec.push_back(tmp);
        }
        else{
            vec.push_back(tmp);
            tmp = "";
        }
        i++;
    }
    cout<<"크기가 6 이상인 단어의 수: ";
    for(it = vec.begin() ; it != vec.end() ; it++){
        if(it->length() >= 6){
            count++;
        }
    }
    cout<<count<<endl;
}
