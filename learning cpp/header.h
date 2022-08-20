#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
    int arr[26] = {0};
public:
    String();
    void setQ();
    ~String();
    void getnum();
    void draw();
    void star(int temp);
};
