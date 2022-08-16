#include<iostream>
using namespace std;
class block{
    string name;
    int data;
public:
    void setname(string temp);
    void setdata(int temp);
    string getname();
    int getdata();
};

class SymbolTable{
    block arr[20];
    int cnt = -1;
public:
    void add(string temp1, int temp2);
    void del(string temp);
    int operator[](string temp);
};
