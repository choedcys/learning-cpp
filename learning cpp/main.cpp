#include <iostream>
void Sharp(int M);
void Space(int K);

void Shell(int N){
    if(N==0){
        return;
    }
    else{
        Sharp(2*N-1);
        Space(6-N);
        Shell(N-1);
    }
}
void Space(int K){
    if(K == 0)
        return;
    else{
        std::cout<<" ";
        Space(K-1);
    }
}
void Sharp(int M){
    if(M==0){
        std::cout<<std::endl;
        return;
    }
    else{
        std::cout<<"#";
        Sharp(M-1);
    }
}

int main(){
    Shell(5);
}
