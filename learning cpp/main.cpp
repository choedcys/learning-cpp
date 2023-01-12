#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    for(int i = 1 ; i < 4 ; i++){
        v1.push_back(i);
        v2.push_back(i*10);
    }
    std::vector<int>::iterator it1 = v1.begin();
    std::vector<int>::iterator it2 = v2.begin();
    for( ; it1 != v1.end() ; it1++){
        std::cout << *it1 <<" ";
    }
    std::cout<<std::endl;
    for( ; it2 != v2.end() ; it2++){
        std::cout << *it2 <<" ";
    }
    std::cout<<std::endl;
    std::transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), std::plus<int>());
    it1 = v1.begin();
    for( ; it1 != v1.end() ; it1++){
        std::cout << *it1 <<" ";
    }
}

