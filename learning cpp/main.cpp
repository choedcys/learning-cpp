#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int sum = 0;
    vector<int>::iterator ptr;
    srand((unsigned int)time(NULL));
    for(int i = 0 ; i < 10 ; i++){
        v.push_back(1+rand()%100);
    }
    cout<<"벡터의 요소: [";
    for(ptr = v.begin() ; ptr < v.end() ; ptr++){
        sum += *ptr;
        cout<<*ptr<<" ";
    }
    cout<<"]"<<endl;
    cout<<"합: "<<sum<<endl;
}
