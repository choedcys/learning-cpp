#include<iostream>
using namespace std;

class String{
    int len;
    char * query;
public:
    String();
    void setQ(char* temp1, int temp2);
    ~String();
    int getlen();
    int comp(char temp);
};

class Ctrl{
    String quiz;
    char* answer;
    int chance = 0;
    char wrong[26];
    char input;
public:
    Ctrl();
    Ctrl(char* temp);
    void play();
    bool end();
};
