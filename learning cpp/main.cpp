#include <iostream>
#include <string>

void sum1(int a, int b){
    std::cout<<"함수: "<<a+b<<std::endl;
}

int main(){
    sum1(10, 20);
    [](int a, int b){
        std::cout<<"람다: "<<a + b<<std::endl;
    }(30, 40);
    return 0;
}
