#include <iostream>

class Money{
    int _Money = 0;
public:
    int operator()(){
        return this->_Money;
    }
    void operator()(int N){
        this->_Money += N;
    }
};

int main(){
    Money money;
    money(100);
    int M = money();
    std::cout<<M;
}
