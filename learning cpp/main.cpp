#include<iostream>
#include"header.h"
using namespace std;

int main(){
    char query[50];
    String change;
    while(1){
        cout<<"한 줄의 문자열을 입력하시오(exit입력 시 종료)"<<endl;
        cin.getline(query,50);
        if(change.setQ(query) == false)
            break;
        else{
            change.alter();
        }
    }
}
