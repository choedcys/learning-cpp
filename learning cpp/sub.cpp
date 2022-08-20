#include<iostream>
#include<cstdlib>
#include<ctime>
#include"header.h"
using namespace std;

String::String(){}
void String::setQ(){
    char temp[500];
    cout<<"문자열 입력=>"<<endl;
    cin.getline(temp,500);
    int i = 0;
    while(1){
        if(temp[i] == NULL)
            break;
        i++;
    }
    len = i;
    query = new char[len+1];
    for(int i = 0 ; i < len ; i++){
        query[i]= temp[i];
    }
    query[len] = NULL;
    cout<<query<<endl;
}

String::~String(){
    cout<<"파괴자 처리 중..."<<endl;
    delete query;
    cout<<"파괴자 처리 완료!"<<endl;
}

void String::getnum(){
    int num = 0;
    for(int i = 0 ; i < len ; i++){
        if(int(query[i]) >= 65 && int(query[i]) <= 90 || int(query[i]) >= 97 && int(query[i]) <= 122){
            num++;
            if(int(query[i]) >= 65 && int(query[i]) <= 90){
                arr[query[i]-65]++;
            }
            else{
                arr[query[i]-97]++;
            }
        }
    }
    cout<<"총 알파벳 수: "<<num<<endl;
}

void String::draw(){
    for(int i = 97 ; i < 123 ; i++){
        cout<<char(i)<<"("<<arr[i-97]<<")  :  ";
        star(arr[i-97]);
    }
}
void String::star(int temp){
    for(int i = 0 ; i < temp ; i++){
        cout<<"*";
    }
    cout<<endl;
}
