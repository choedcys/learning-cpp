#include<iostream>
#include"header.h"
using namespace std;

int main() {
    Employee e("홍길동", 100);
    int salary = (int)e;
    e.display();
    cout<<"int salary = "<<salary<<endl;
    return 0;
}
