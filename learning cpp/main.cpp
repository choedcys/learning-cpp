#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int multi(int n){
    if(n == 0)
        return 1;
    else
        return 10*multi(n-1);
}
int main(){
    int N;
    int cnt = 1;
    int sum = 0;
    int amount[26] = {0};
    std::string temp;
    std::vector<std::string> Words;
    std::cin>>N;
    std::cin.get();
    for(int i = 0 ; i < N ; i++){
        getline(std::cin, temp);
        Words.push_back(temp);
    }
    std::vector<std::string>::iterator it = Words.begin();
    for(; it != Words.end() ; it++){
        std::string temp = *it;
        for(int row = temp.length() ; row > 0 ; row--){
            amount[temp.at(row)-65] += multi(row);
        }
    }
    for(int i = 25 ; i >= 0 ; i++){
        sum += amount[i]*cnt;
        cnt++;
    }
    std::cout<<sum;
}
