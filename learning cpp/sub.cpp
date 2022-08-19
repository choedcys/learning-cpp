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
    delete tmp;
    cout<<"처리 완료!"<<endl;
}

int String::Intlize(char* temp1, int temp2){
    int res = 0, ten = 1, k = 0;
    for(int i = 0 ; i < temp2 ; i++){
        k = i - temp2;
        while(k < -1){
            ten *= 10;
            k++;
        }
        res+=((int(temp1[i]))-48)*ten;
        ten = 1;
    }
    cout<<res<<endl;
    return res;
}
void String::plus(){
    tmp = new char[len+1];
    strcpy(tmp,query);
    char temp[10];
    int i = 0, k = 0;
    int sum = 0;
    while(1){
        temp[i] = *query++;
        if(*query == '+' || *query == NULL){
            query++;
            temp[++i] = NULL;
            sum += Intlize(temp, i);
            k++;
            i = -1;
            if(*query == NULL)
                break;
        }
        i++;
    }
    cout<<"숫자들의 합은: "<<sum;
}


int String::symbol(){
    int res;
    for(int i = 0 ; i < len ;i++){
        if(query[i] == '+')
            res++;
    }
    return res;
}
