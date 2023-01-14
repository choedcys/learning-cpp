#include<iostream>
#include<vector>

int main(){
    std::vector<std::string> v = {"apple", "banana", "grape", "orange", "kiwi"};
    std::for_each(v.begin(), v.end(),[](std::string cursor){
        std::cout<<cursor<<std::endl;
    });
}
