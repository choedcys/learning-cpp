#include"header.h"
#include<iostream>
using namespace std;

macStart::macStart():data(10){}

void macStart::prn(){
    cout<<data<<"출력"<<endl;
}

void macStart::modify(){
    cout<<"입력: ";
    cin>>data;
}
