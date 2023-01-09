#include <iostream>

class Plus{
public:
    int operator()(int a, int b){
        return a+b;
    }
};

int main(){
    Plus plus;
    std::cout<<"plus(10, 20): "<<plus(10,20)<<std::endl;
    return 0;
}
