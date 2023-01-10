#include <iostream>
#include <list>
#include <algorithm>

class Add{
    int v;
public:
    Add(int temp):v(temp){}
    void operator()(int& elem)const{
        elem += v;
    }
};
void outint(int n){
    std::cout<<n<<" ";
}
int main(){
    std::list<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    
    for_each(values.begin(), values.end(), outint);
    for_each(values.begin(), values.end(), Add(20));
    std::cout<<std::endl;
    
    for_each(values.begin(), values.end(), outint);
}
