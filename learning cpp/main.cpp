#include <iostream>

int func(int start, int end){
    if(start == end)
        return end;
    else
        return start+func(start+1, end);
}

int main(){
    int start, end;
    std::cin>>start>>end;
    std::cout<<func(start, end)<<std::endl;
}




