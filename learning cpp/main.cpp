#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string temp;
    std::vector<std::string> Man;
    std::vector<std::string> Woman;
    std::vector<std::string> Union;
    std::cout<<"철수친구: ";
    while(1){
        getline(std::cin,temp);
        if(temp == "END")
            break;
        else
            Man.push_back(temp);
    }
    std::cout<<"영희친구: ";
    while(1){
        getline(std::cin,temp);
        if(temp == "END")
            break;
        else
            Woman.push_back(temp);
    }
    sort(Man.begin(), Man.end());
    sort(Woman.begin(), Woman.end());
    std::vector<std::string>::iterator it1 = Man.begin();
    std::vector<std::string>::iterator it2 = Woman.begin();
    std::cout<<"철수친구: ";
    for( ; it1 != Man.end() ; it1++){
        std::cout<<*it1<<" ";
    }
    std::cout<<"영희친구: ";
    for( ; it2 != Woman.end() ; it2++){
        std::cout<<*it2<<" ";
    }
}
