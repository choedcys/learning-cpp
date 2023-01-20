#include <iostream>

//int func(int N){
//    int sum = 0;
//    sum += N*N*N;
//    if(N > 1)
//        return sum+func(N-1);
//    else
//        return 1;
//}
//
//int main(){
//    int N;
//    std::cin>>N;
//    std::cout<<func(N);
//}

int func(int value){
    if(value == 1){
        std::cout<<"=";
        return 1;
        
    }
    else{
        std::cout<<11-value<<"+";
        return value+func(value-1);
    }
}

int main(){
    std::cout<<func(10);
}
