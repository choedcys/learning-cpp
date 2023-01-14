#include <iostream>
#include <functional>

int main(){
    auto f1 = [](int x, int y){return x + y;};
    std::cout<<f1(2,3)<<std::endl;
    std::function<int(int, int)> f2 = [](int x, int y){return x+y;};
    
    std::cout<<f2(3,4)<<std::endl;
}
