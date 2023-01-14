#include <iostream>
#include <string>

int main(){
    int result1 = 1;
    int result2 = 2;
    int result3 = 3;
    int result4 = 4;
    
    std::cout << "3. 전체 복사"<<std::endl;
    [=](int x){
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"result3, 4: "<<result3<<", "<<result4<<std::endl;
        std::cout<<"매개변수: "<<x<<std::endl;
    }(30);
    std::cout<<std::endl;
    [&](int y){
        std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
        std::cout<<"result3, 4: "<<result3<<", "<<result4<<std::endl;
        std::cout<<"매개변수: "<<y<<std::endl;
        result1 += y;
        result2 += y;
        result3 += y;
        result4 += y;
    }(99);
    std::cout<<"result1, 2: "<<result1<<", "<<result2<<std::endl;
    std::cout<<"result3, 4: "<<result3<<", "<<result4<<std::endl;
    return 0;
}
