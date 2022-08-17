#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
public:
    String();
    String(char* temp);
    String(String& temp);
    ~String();
    String operator=(String temp);
    String operator+(String temp);
    void operator+=(String temp);
    bool operator ==(String temp);
    friend ostream& operator<<(ostream& os, String& temp);
    friend istream& operator>>(istream& is, String& temp);
};
