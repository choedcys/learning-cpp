#include <iostream>
#include <functional>

int main(){
    std::minus<int> add;
    std::cout<<add(11,22)<<std::endl;
    std::cout<<std::minus<int>()(100,200)<<std::endl;
    return 0;
}
