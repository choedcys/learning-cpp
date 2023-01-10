#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

int main(){
    std::vector<bool> v1;
    std::vector<bool> v2;
    std::vector<bool> v3(3);
    
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(true);
    
    v2.push_back(false);
    v2.push_back(false);
    v2.push_back(true);
    
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), std::logical_and<bool>());
    
    for(int i = 0 ; i < v3.size() ; i++){
        if(v3[i])
            std::cout<<"true ";
        else
            std::cout<<"false ";
    }
    std::cout<<std::endl;
}
