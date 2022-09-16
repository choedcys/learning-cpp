#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator iterator = v.begin();
    
    for( ; iterator < v.end() ; iterator++){
        *iterator *= 2;
    }
    for(int i = 0 ; i < 3 ; i++){
        cout<<v[i]<<endl;
    }
}
