#include<iostream>

int main(){
    int a, b;
    std::cout<<"숫자 2개 입력: ";
    std::cin>>a>>b;
    [=](int a, int b){
        if(a>b){
            std::cout<<"큰 값: "<<a<<std::endl;
            std::cout<<"작은 값: "<<b<<std::endl;
        }
        else{
            std::cout<<"큰 값: "<<b<<std::endl;
            std::cout<<"작은 값: "<<a<<std::endl;
        }
    }(a,b);
}
