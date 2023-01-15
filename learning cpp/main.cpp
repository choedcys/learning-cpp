#include<iostream>
#include<vector>

struct NameCard{
    std::string name;
    int age;
};
bool condition(NameCard temp1, NameCard temp2){
    if(temp1.age>temp2.age)
        return true;
    else
        return false;
}
int main(){
    std::vector<NameCard> v1 = {{"ccc" , 30}, {"aaa" , 10}, {"bbb" , 10}, {"ddd" , 40}, {"eee" , 50}, {"aaa" , 20}};
    std::vector<NameCard>::iterator it = v1.begin();
    std::cout<<"정렬 전: ";
    for( ; it != v1.end() ; it++){
        std::cout<<"["<<it->name<<", "<<it->age<<"] ";
    }
    std::cout<<std::endl;
    std::sort(v1.begin(), v1.end(), condition);
    it = v1.begin();
    std::cout<<"정렬 후: ";
    for( ; it != v1.end() ; it++){
        std::cout<<"["<<it->name<<", "<<it->age<<"] ";
    }
}
