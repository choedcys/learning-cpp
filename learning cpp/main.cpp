#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main() {
    string temp;
    vector<string> v;
    vector<string>::iterator it;
    cout<<"이름 5개를 입력하세요"<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<i+1<<"번째:";
        getline(cin,temp);
        v.push_back(temp);
    }
    temp = *v.begin();
    for(it = v.begin() ; it != v.end() ; it++){
        if(*it > temp)
            temp = *it;
    }
    cout<<temp;
}
