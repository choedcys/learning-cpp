#include<iostream>
#include<algorithm>
#include<array>

class Sum{
public:
    int operator()(std::array<int, 10> temp, int n){
        if(n % 2 == 0){
            int sum = 0;
            for(int i = 0 ; i < 5 ; i++){
                sum+=temp[i*2+1];
            }
            return sum;
        }
        else{
            int sum = 0;
            for(int i = 0 ; i < 5 ; i++){
                sum+=temp[i*2];
            }
            return sum;
        }
    }
};

int main(){
    Sum obj;
    std::array<int, 10> theList = {1,2,3,4,5,6,7,8,9,10};
    std::cout<<"짝수 합: "<<obj(theList,0)<<std::endl;
    std::cout<<"홀수 합: "<<obj(theList,1)<<std::endl;
}
