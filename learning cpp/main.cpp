#include <iostream>
#include <functional>
#include <vector>

void print(std::vector<int> temp){
    std::vector<int>::iterator it = temp.begin();
    std::cout<<"{ ";
    for( ; it != temp.end() ; it++){
        std::cout<<*it<<" ";
    }
    std::cout<<"}"<<std::endl;
}

int main(){
    std::vector<int> V1;
    std::vector<int> V2;
    std::vector<int> V3;
    for(int i = 0 ; i < 3 ; i++){
        V1.push_back((i+1)*10);
    }
    for(int i = 0 ; i < 3 ; i++){
        V2.push_back(i+1);
    }
    std::vector<int>::iterator it1 = V1.begin();
    std::vector<int>::iterator it2 = V2.begin();
    for(; it1 != V1.end() ; it1++){
        V3.push_back(std::plus<int>()(*it1, *it2));
        it2++;
    }
    std::cout<<"V1: ";
    print(V1);
    std::cout<<"V2: ";
    print(V2);
    std::cout<<"V1+V2: ";
    print(V3);
    return 0;
}
