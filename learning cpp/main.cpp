#include<iostream>
#include<vector>

int fraction(int n1, int n2){
    if(n2 % n1 == 0)
        return n1;
    else
        return fraction(n2%n1, n1);
}

int main(){
    int n1, n2, k1, k2;
    std::cin>>n1>>n2>>k1>>k2;
    
    n1 = n1 * k2;
    k1 = k1 * n2;
    n2 = n2 * k2;
    n1 += k1;
    
    int div = fraction(n1,n2);
    std::cout<<n1/div<<" "<<n2/div<<std::endl;
}
