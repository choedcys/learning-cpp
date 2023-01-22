#include <iostream>

void show_digit(int N){
    if(N == N%10){
        std::cout<<N<<" ";
        return;
    }
    else{
        show_digit(N/10);
        std::cout<<N%10<<" ";
    }
}

int main(){
    int N;
    std::cin>>N;
    show_digit(N);
    std::cout<<std::endl;
}
