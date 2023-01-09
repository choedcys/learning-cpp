#include <iostream>

class Equal{
public:
    int operator()(int a, int b){
        return a == b;
    }
};

int main(){
    Equal cmp;
    std::cout<<"pls(5, 5): "<<cmp(5,5)<<std::endl;
    std::cout<<"cmp.operator()(10, 20): "<<cmp.operator()(10,20)<<std::endl;
    std::cout<<"Equal()(10, 10): "<<Equal()(10, 10)<<std::endl;
    return 0;
}
