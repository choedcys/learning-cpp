#include<iostream>
#include<list>


int main(){
    int start, end;
    std::cout<<"시작: ";
    std::cin>>start;
    std::cout<<"끝: ";
    std::cin>>end;
    [](int start, int end){
        int sum = 0;
        for(int i = start ; i <= end ; i++){
            sum+=i;
        }
        std::cout<<start<<" ~ "<<end<<"의 합은: "<<sum;
        std::cout<<std::endl;
    }(start, end);
}
