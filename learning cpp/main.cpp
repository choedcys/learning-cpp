#include <iostream>
#include <string>

int main(){
    int result1 = 1;
    int result2 = 2;
    int result3 = 3;
    int result4 = 4;
    
    std::cout<<"6. 전체 복사, 일부 참조"<<std::endl;
    
    
    [=, &result3, &result4](int x){
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"매개변수: "<<x<<std::endl;
    }(30);
    std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
    std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"5. 전체 참조, 일부 복사"<<std::endl;
    [&, result1, result2](int y){
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"매개변수: "<<y<<std::endl;
    }(99);
    std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
    std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
    std::cout<<std::endl;
}
