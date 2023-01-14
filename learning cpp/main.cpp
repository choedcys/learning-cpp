#include<iostream>
#include<vector>

class Even{
    int NumberOfEven = 0;
public:
    int operator()(int num){
        if(num%2 == 0)
        NumberOfEven++;
        return NumberOfEven;
    }
    int getNumberOfEven(){
        return NumberOfEven;
    }
};
int main(){
    Even obj;
    int cnt = 0;
    std::vector<int> v;
    for(int i = 1 ; i < 11 ; i++){
        v.push_back(i);
    }
    for(int i = 0 ; i < 10 ; i++){
        obj(v[i]);
    }
    std::cout<<"짝수개수(함수객체): "<<obj.getNumberOfEven()<<std::endl;
    std::for_each(v.begin(), v.end(), [&cnt](int temp){
       if(temp%2 == 0)
           cnt++;
    });
    std::cout<<"짝수개수(람다): "<<cnt<<std::endl;
}
