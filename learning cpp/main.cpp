#include<iostream>
#include"header.h"
using namespace std;

int main(){
    SymbolTable table;
    table.add("house", 100);
    table.add("mouse", 200);
    table.add("korea", 300);
    table.del("mouse");
    cout<< table["house"] << endl;
    return 0;
}
