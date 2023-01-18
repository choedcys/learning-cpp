#include <iostream>

void func(int n){
    std::cout<<n<<" ";
    if(n < 1)
        return;
    func(n-5);
}

int main(){
    func(20);
}
