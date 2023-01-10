#include <iostream>
#include <list>
#include <algorithm>

void add10(int& elem){
    elem += 10;
}
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
    for_each(values.begin(), values.end(), add10);
    std::cout<<std::endl;
    
    for_each(values.begin(), values.end(), outint);
}
