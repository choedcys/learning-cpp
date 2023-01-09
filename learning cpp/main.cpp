#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

struct Plus{
    int operator()(int a, int b)const{
        return a+b;
    }
};

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    for(int i = 0 ; i < v1.size() ; i++){
        std::cout << v1[i]<<" ";
    }
    std::cout<<std::endl;
    
    for(int i = 0 ; i < v2.size() ; i++){
        std::cout << v2[i]<<" ";
    }
    std::cout<<std::endl;
    
    std::transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), Plus());
    
    for(int i = 0 ; i < v1.size() ; i++){
        std::cout << v1[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
