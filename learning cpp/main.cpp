#include<iostream>
#include<algorithm>
#include<list>

template <typename T>
bool compare(int n){
    return 10 <= n;
}

int main(){
    std::list<int> l1 = {10, 100, 5, 4, 70, 2};
    std::list<int>::iterator it = l1.begin();
    std::cout<<"삭제 전 list: ";
    for( ; it != l1.end() ; it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
    l1.erase(std::remove_if(l1.begin(), l1.end(),compare<int>),l1.end());
    std::cout<<"삭제 후 list: ";
    for( auto n:l1){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
}
