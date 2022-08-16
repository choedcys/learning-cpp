#include<iostream>
using namespace std;

class Employee{
    string name;
    int money;
public:
    Employee(string temp1, int temp2);
    void display();
    operator int();
};
