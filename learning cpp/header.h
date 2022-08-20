#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
public:
    String();
    bool setQ(char* temp);
    ~String();
    void alter();
};
