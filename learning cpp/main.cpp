#include <iostream>
#include <string>

void reverse(std::string word, int n = 0){
    if(n == word.length())
        return;
    else
        reverse(word,n+1);
    std::cout<<word.at(n);
 }

 int main(){
     std::string word;
     getline(std::cin,word);
     reverse(word);
 }
