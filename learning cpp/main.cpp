#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

template <typename T>
void print(const T& v){
    typename T::const_iterator it;
    
    for(it = v.begin() ; it != v.end(); ++it){
        std::cout<<*it<<' ';
    }
    std::cout<<std::endl;
}

int main(){
    std::vector <int> vec;
    for(int i = 0 ; i < 10 ; i++){
        vec.push_back(rand() % 100);
    }
    print(vec);
    
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    print(vec);
    
    std::sort(vec.begin(), vec.end(), std::less<int>());
    print(vec);
    return 0;
}
