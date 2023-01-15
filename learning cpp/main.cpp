#include<iostream>
#include<vector>

class Plus{
public:
    int operator()(int temp){
        temp += 100;
        return temp;
    }
};

int main(){
    Plus p;
    std::vector<int> v;
    for(int i = 0 ; i < 5 ; i++){
        v.push_back((i+1)*10);
    }
    std::cout<<"벡터값: ";
    std::for_each(v.begin(), v.end(), [](int temp){
        std::cout<<temp<<" ";
    });
    std::cout<<std::endl;
    std::for_each(v.begin(), v.end(), [](int& temp){
        temp += 100;
    });
    std::cout<<"변경 후: ";
    std::for_each(v.begin(), v.end(), [](int temp){
        std::cout<<temp<<" ";
    });
    std::cout<<std::endl;
    std::cout<<"변경 후(함수객체): ";
    for(int i = 0 ; i < 5 ; i++){
        std::cout<<p(v[i])<<" ";
    }
}
