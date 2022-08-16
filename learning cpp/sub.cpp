#include<iostream>
#include"header.h"
using namespace std;

void block::setname(string temp){
    name = temp;
}
void block::setdata(int temp){
    data = temp;
}
string block::getname(){
    return name;
}
int block::getdata(){
    return data;
}


void SymbolTable::add(string temp1, int temp2){
    cnt++;
    arr[cnt].setdata(temp2);
    arr[cnt].setname(temp1);
}
void SymbolTable::del(string temp){
    for(int i = 0 ; i < cnt+1 ; i++){
        if(arr[i].getname()==temp){
            for(int k = i ; k < cnt+1 ; k++){
                arr[i] = arr[i+1];
            }
            cnt--;
            break;
        }
    }
}
int SymbolTable::operator[](string temp){
    for(int i = 0 ; i < cnt+1 ; i++){
        if(arr[i].getname()==temp){
            return arr[i].getdata();
        }
    }
    return 0;
}

