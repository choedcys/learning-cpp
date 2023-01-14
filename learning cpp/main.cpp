#include <iostream>


int main(){
    int a = 10;
    int b = 20;
    int R = [a, &b](int c)->int{
        b = a + b + c;
        return b;
    }(1);
    std::cout<<"a="<<a<<" b="<<b<<" 결과="<<R<<std::endl;
}
