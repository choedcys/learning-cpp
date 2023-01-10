#include <iostream>
#include <functional>
#include <vector>

class SUM{
public:
    int stack = 0;
    int operator()(int temp){
        stack += temp;
        return stack;
    }
};
int main(void){
    SUM obj;
    int cnt = 0;
    std::vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    std::vector<int>::iterator it = v.begin();
    for( ; it != v.end() ; it++){
        obj(*it);
        std::cout<<*it;
        if(cnt != v.size()-2){
            std::cout<<"+";
        }
        else{
            std::cout<<"+";
        }
        cnt++;
    }
    std::cout<<"="<<obj.stack<<std::endl;
}
