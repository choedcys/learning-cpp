#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
public:
    String();
    String(char* temp);
    ~String();
    void rotate();
};
