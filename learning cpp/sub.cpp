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

String::String(String& temp){
    int i = 0;
    while(temp.query[i] != NULL){
        i++;
    }
    this->len = i;
    this->query = new char[len+1];
    i = 0;
    for(i = 0 ; i < len ; i++){
        this->query[i] = temp.query[i];
    }
    this->query[i] = NULL;
}

String::~String(){
    delete[]query;
}
String String::operator=(String temp){
    int i = 0;
    while(temp.query[i] != NULL){
        i++;
    }
    this->len = i;
    this->query = new char[len+1];
    i = 0;
    for(i = 0 ; i < len ; i++){
        this->query[i] = temp.query[i];
    }
    this->query[i] = NULL;
    return *this;
}
String String::operator+(String temp){
    String res;
    res.query = new char[this->len+temp.len+1];
    int i = 0, k = 0;
    res.len = this->len + temp.len;
    while(this->query[i] != NULL){
        res.query[i] = this->query[i];
        i++;
    }
    k = i;
    while(temp.query[k-i] != NULL){
        res.query[k] = temp.query[k-i];
        k++;
    }
    res.query[k] = NULL;
    return res;
}
void String::operator+=(String temp){
    char* res;
    res = new char[this->len+temp.len+1];
    int i = 0, k = 0;
    this->len += temp.len;
    while(this->query[i] != NULL){
        res[i] = this->query[i];
        i++;
    }
    k = i;
    while(temp.query[k-i] != NULL){
        res[k] = temp.query[k-i];
        k++;
    }
    res[k] = NULL;
    this->query = new char[this->len + 1];
    for(i = 0 ; i < this->len ; i++){
        this->query[i] = res[i];
    }
    this->query[i] = NULL;
}

bool String::operator ==(String temp){
    int i = 0;
    if(this->len != temp.len)
        return false;
    else{
        for(i = 0 ; i < this->len ; i++){
            if(this->query[i] != temp.query[i])
                return false;
        }
        return true;
    }
}

ostream& operator<<(ostream& os, String& temp){
    os<<temp.query;
    return os;
}
istream& operator>>(istream& is, String& temp){
    is>>temp.query;
    return is;
}
