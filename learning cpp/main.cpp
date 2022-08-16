#include"header.h""
#include <iostream>
using namespace std;
int main() {
    Point p1(100, 200);
    Point p2(200, 300);
    Point p3;
    cout<<"p1 = "; p1.display(); cout<<"p2 = "; p2.display();
    p3 = p1 + p2; cout<<"p1 + p2 = "; p3.display();
    p3 = p1 - p2; cout<<"p1 - p2 = "; p3.display();
    return 0;
}
