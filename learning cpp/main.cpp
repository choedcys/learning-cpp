#include <iostream>

void func(int n){
    if(n < 1)
        return;
    func(n-2);
    std::cout<<n<<" ";
}

int main(){
    func(9);
}
