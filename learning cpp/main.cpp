#include <iostream>
#include <string>

int main(){
    int result1 = 1;
    int result2 = 2;
    int result3 = 3;
    int result4 = 4;
    
    std::cout<<"1. 특정변수 복사"<<std::endl;
    [result1, result2](int a, int b){
        std::cout<<"result1=" <<result1<<" result2="<<result2<<std::endl;
        std::cout<<"a="<<a<<" b="<<b<<std::endl;
        std::cout<<"result1 + a + b: "<<result1 + a + b <<"\n";
    }(10,20);
    
    std::cout<<std::endl;
    std::cout<<"2. 특정변수 참조"<<std::endl;
    [&result3, &result4](int a, int b){
        std::cout<<"result3="<<result3<<" result4="<<result4<<std::endl;
        result3 = 22222;
        std::cout << "(내부) result3="<<result3 <<" result4= "<<result4<<std::endl;
        result4 = a + b;
    }(10, 20);
    
    std::cout<<"(외부) result3="<<result3<<" result4="<<result4<<std::endl;
    return 0;
}
