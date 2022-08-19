#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
    char * tmp;
public:
    String();
    String(char* temp);
    ~String();
    void plus();
    int symbol();
    int Intlize(char* temp1, int temp2);
};
