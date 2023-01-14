#include<iostream>
#include<vector>

int main(){
    std::vector<int> v = {34, -43, 56};
    std::cout<<"변경 전: ";
    std::for_each(v.begin(), v.end(), [](int temp){
        std::cout<<temp<<" ";
    });
    std::cout<<std::endl;
    std::for_each(v.begin(), v.end(), [](int& temp){
        temp *= -1;
    });
    std::cout<<"변경 후: ";
    std::for_each(v.begin(), v.end(), [](int temp){
        std::cout<<temp<<" ";
    });
}
