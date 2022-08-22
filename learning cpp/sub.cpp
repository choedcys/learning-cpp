#include<iostream>
#include"header.h"
using namespace std;

String::String(){}
void String::setQ(char* temp1, int temp2){
    len = temp2;
    query = new char[len+1];
    for(int i = 0 ; i < len ; i++){
        query[i]= temp1[i];
    }
    query[len] = NULL;
}

String::~String(){
    cout<<"파괴자 처리 중..."<<endl;
    delete query;
    cout<<"파괴자 처리 완료!"<<endl;
}

int String::getlen(){
    return len;
}
char String::getQ(int temp){
    return query[temp];
}


bool Ctrl::end(){
    for(int i = 0 ; i < quiz.getlen() ; i++){
        if(answer[i] == '_')
            return false;
    }
    return true;
}
Ctrl::Ctrl(){}
int Ctrl::comp(char temp){
    for(int i = 0 ; i < quiz.getlen() ; i++){
        if(temp == quiz.getQ(i) && answer[i] == '_'){
            return i;
        }
    }
    return -1;
}
Ctrl::Ctrl(char* temp){
    int len = 0;
    while(temp[len] != NULL){
        temp[len++];
    }
    quiz.setQ(temp, len);
    answer = new char[len+1];
    for(int i = 0 ; i < len ; i++){
        answer[i]= '_';
    }
    answer[len] = NULL;
    chance = len;
    cout<<"영어 단어 게임을 하시겠습니까?<y.n>"<<endl;
    cout<<"수수께끼 단어를 추측해 보십시오."<<endl;
    cout<<len<<"개의 문자로 이루어져 있습니다."<<endl;
    cout<<"한번에 한 문자씩 추측하십시오."<<endl;
}
void Ctrl::play(){
    while(1){
        cout<<"목숨 : "<<chance<<"개"<<endl;
        cout<<"추측하는 단어 : "<<answer<<endl;
        cout<<"지금까지 틀린 문자들: "<<wrong<<endl;
        cout<<"문자를 추측하십시오 :";
        cin>>input;
        int point = comp(input);
        if(point == -1){
            if(chance == 0){
                cout<<"목숨 없음, 게임 패배"<<endl;
                break;
            }
            cout<<"틀렸군"<<endl;
            wrong[strlen(wrong)] = input;
            wrong[strlen(wrong)+1] = NULL;
            chance--;
        }
        else{
            cout<<"맞았군"<<endl;
            answer[point] = input;
            cout<<answer<<endl;
            if(end() == true){
                cout<<"게임승리!"<<endl;
                break;
            }
        }
    }
}
