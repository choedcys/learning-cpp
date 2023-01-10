#include <iostream>
#include <functional>

int main(){
    int result;
    
    std::logical_and<int> And;
    result = And(10 == 10, 1 < 2);
    std::cout<<result<<std::endl;
    
    result = std::logical_and<int>()(10 > 20, 'A'<'B');
    std::cout<<result<<std::endl;
    
    if(std::logical_and<int>()(1,1))
        std::cout<<"true"<<std::endl;
}
