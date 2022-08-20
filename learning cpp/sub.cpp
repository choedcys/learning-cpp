#include<iostream>
#include<cstdlib>
#include<ctime>
#include"header.h"
using namespace std;

String::String(){}
bool String::setQ(char* temp){
    if(strcmp(temp,"exit")==1 or strcmp(temp,"exit")==-1){
        return false;
    }
    else{
        int i = 0;
        while(1){
            if(temp[i] == NULL)
                break;
            i++;
        }
        len = i;
        delete query;
        query = new char[len+1];
        for(int i = 0 ; i < len ; i++){
            query[i]= temp[i];
        }
        query[len] = NULL;
        cout<<query<<endl;
        return true;
    }
}

String::~String(){
    cout<<"파괴자 처리 중..."<<endl;
    delete query;
    cout<<"처리 완료!"<<endl;
}

void String::alter(){
    srand((unsigned int)time(NULL));
    int point = rand()%len;
    int alt = (rand()%100);
    query[point] = char(alt);
    cout<<query;
}
