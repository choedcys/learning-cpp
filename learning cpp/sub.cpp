#include<iostream>
#include"header.h"
using namespace std;


Employee::Employee(string temp1, int temp2){
    name = temp1;
    money = temp2;
}
void Employee::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<money<<endl;
}

Employee::operator int(){
    return money;
}
