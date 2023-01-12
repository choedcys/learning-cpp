#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

bool condition(int n1, int n2){
    if(n1 > n2)
        return true;
    else
        return false;
}

int main(){
    std::vector<int> v = {100, 500, 1020, 1000};
    std::vector<int>::iterator it;
    std::cout<<"소트 전: ";
    for( it = v.begin() ; it < v.end() ; it++ ){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
    std::sort(v.begin(),v.end(),condition);
    std::cout<<"소트 후: ";
    for( it = v.begin() ; it < v.end() ; it++ ){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

