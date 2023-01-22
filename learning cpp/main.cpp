#include <iostream>

void func(int N){
    if(N == N%10){
        std::cout<<N<<" ";
        return;
    }
    else{
        std::cout<<N%10<<" ";
        func(N/10);
    }
}

int main(){
    int N;
    std::cin>>N;
    func(N);
    std::cout<<std::endl;
}
