#include <iostream>
class mySum{
    int sumRet = 0;
public:
    int operator()(int num1_){
        sumRet += num1_;
        return sumRet;
    }
};

int main(){
    int num1 = 10;
    int num2 = 20;
    
    mySum sumP;
    int ret = sumP(num1);
    std::cout<<ret<<std::endl;
    
    ret = sumP(num2);
    std::cout<<ret<<std::endl;
    return 0;
}
