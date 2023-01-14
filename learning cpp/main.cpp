#include<iostream>

int main(){
    [](int a){
        if(a>0){
            std::cout<<"절대값: "<<a<<std::endl;
        }
        else{
            std::cout<<"절대값: "<<-a<<std::endl;
            
        }
    }(-109);
}
