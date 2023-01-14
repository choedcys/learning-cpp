#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>


int main(){
    std::vector<std::function<void(void)>> funcs;
    
    funcs.push_back([](){std::cout << "Hello"<<std::endl;});
    funcs.push_back([](){std::cout << "lambda!"<<std::endl;});
    
    for(auto& func : funcs){
        func();
    }
}
