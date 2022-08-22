#include<iostream>
#include"header.h"
using namespace std;

String::String(){}
void String::setQ(){
    query = NULL;
    query = new char[10000];
    cout<<"여러줄의 문자열을 입력하세요 문자열의 끝은 &입니다=>"<<endl;
    cin.getline(query,10000,'&');
    cout<<query;
}

String::~String(){
    cout<<"파괴자 처리 중..."<<endl;
    cout<<"query포인터가 NULL임"<<endl;
    cout<<"파괴자 처리 완료!"<<endl;
}

void String::change(){
    char find[50];
    char replace[50];
    char temp[10000];
    int i = 0, len = 0;
    char word [50];
    char* res = new char[3];
    strcpy(res,"ABC");
    cout<<"찾는 문자열: ";
    cin>>find;
    cout<<"바꿀 문자열: ";
    cin.get();
    cin.getline(replace,50);
    while(1){
        if(' ' == *query || *query == NULL){
            if(NULL == *query){
                word[i] = NULL;
                if(strcmp(word,find)==0)
                    strcat(res,replace);
                else
                    strcat(res,word);
                i = 0;
                strcat(res," ");
                break;
            }
            else{
                query++;
                word[i] = NULL;
                if(strcmp(word,find)==0)
                    strcat(res,replace);
                else
                    strcat(res,word);
                strcat(res," ");
                i = 0;
            }
   
        }
        word[i] = *query;
        query++;
        i++;
    }
    cout<<res<<endl;
}
