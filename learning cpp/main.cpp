#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

class Even{
    int NumberOfEven = 0;
public:
    int operator()(int temp){
        if(temp%2 == 0)
            NumberOfEven++;
        return NumberOfEven;
    }
    int getNumberOfEven(){
        return NumberOfEven;
    }
};

int main(){
    Even even;
    std::vector<int> v1;
    srand((unsigned int)time(NULL));
    int size = rand()%100;
    for (int i = 0; i < size; ++i){
        v1.push_back(rand()%100);
    }
    std::vector<int>::iterator it = v1.begin();
    for ( ; it != v1.end(); ++it){
        std::cout<<*it<<"..";
        if(*it%2 == 0)
            std::cout<<"짝수"<<std::endl;
        else
            std::cout<<"홀수"<<std::endl;
        even(*it);
    }
    std::cout<<"짝수 개수: "<<even.getNumberOfEven()<<std::endl;
    return 0;
}
