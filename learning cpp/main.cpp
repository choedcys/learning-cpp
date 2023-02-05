#include<iostream>
#include<vector>
long long factorial(long long N){
    long long sum = 1;
    for(int i = 1 ; i <= N ; i++){
        sum *= i;
    }
    return sum;
}

long long Permutation(long long N, long long M){
    if(N==1)
        return M;
    else
        return M*Permutation(N-1, M-1);
}

int main(){
    long long T, M, N, *res;
    std::cin>>T;
    res = new long long[T];
    for(int i = 0 ; i < T ; i++){
        std::cin>>N>>M;
        if(N > 25 || M > 25)
            res[i] = Permutation(N-1, M-1)/factorial(N-1) + Permutation(N, M-1)/factorial(N);
        else
            res[i] = Permutation(N,M)/factorial(N);
    }
    for(int i = 0 ; i < T ; i++){
        std::cout<<res[i]<<std::endl;
    }
}
