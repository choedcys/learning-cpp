#include<iostream>
#include"header.h"
using namespace std;

String::String(){}
String::String(char* temp){
    int i = 0;
    while(temp[i] != NULL){
        i++;
    }
    len = i;
    query = new char[len+1];
    i = 0;
    for(i = 0 ; i < len ; i++){
        query[i] = temp[i];
    }
    query[i] = NULL;
}

String::~String(){
    cout<<"파괴자 처리 중..."<<endl;
    delete[]query;
    cout<<"처리 완료!"<<endl;
}

void String:: reverse(){
    char temp;
    for(int row = 0 ; row < len/2 ; row++){
        temp = query[row];
        query[row] = query[len-row-1];
        query[len-row-1] = temp;
    }
    cout<<query;
}
