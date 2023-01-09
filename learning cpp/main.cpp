#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

bool isGreaterThan50(int e){
    return (e>50) ;
}

int main(){
    std::vector<int> vec;
    for(int i = 0 ; i < 10 ; i++){
        vec.push_back(rand()%100);
    }
    std::vector<int>::iterator it;
    
    for(it=vec.begin(); ;it++){
        it = find_if(it, vec.end(),isGreaterThan50);
        if(it == vec.end())
            break;
        std::cout<<*it<<"발견"<<std::endl;
    }
    return 0;
}
