#include <iostream>

int func(int N){
    if(N==1)
        return 1;
    else
        return N*func(N-1);
}

int main(){
    int N;
    std::cin>>N;
    std::cout<<func(N)<<std::endl;
}


