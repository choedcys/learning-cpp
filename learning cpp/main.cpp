#include <iostream>
bool func(int temp1, int temp2){
    return temp1 == temp2;
}

class FunctionObject{
public:
    bool operator()(int temp1, int temp2){
        return temp1 == temp2;
    }
};
int main(){
    FunctionObject FO;
    bool (*F)(int, int) = func;
    std::cout<<"함수로 10과 20을 비교: "<<func(10,20)<<std::endl;
    std::cout<<"함수포인터로 10과 20을 비교: "<<F(10,20)<<std::endl;
    std::cout<<"함수객체로 10과 20을 비교: "<<FO(10,20)<<std::endl;
}
