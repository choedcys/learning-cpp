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
    delete[]query;
}

void String:: rotate(){
    char temp;
    for(int row = 0 ; row < len ; row++){
        temp = query[0];
        for(int col = 0 ; col < len-1 ; col++){
            query[col] = query[col+1];
        }
        query[len-1] = temp;
        cout<<query<<endl;
    }
}
