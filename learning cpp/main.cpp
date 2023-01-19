#include <iostream>
#include <string>

std::string reverse(std::string temp1, int n=0){
    char temp2;
    temp2 = temp1[n];
    temp1[n] = temp1[temp1.length()-1-n];
    temp1[temp1.length()-1-n] = temp2;
    if(n == ((temp1.length()-1)/2))
        return temp1;
    else{
        return reverse(temp1, n+1);
    }
    
}

int main(){
    std::string word;
    getline(std::cin,word);
    std::cout<<reverse(word,0)<<std::endl;
}
