#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int temp;
    
    cout<<"5개를 입력하시오: ";
    for(int i = 0 ; i < 5 ; i++){
        cin>>temp;
        v.push_back(temp);
    }
    vector<int>::iterator it = v.begin();
    cout<<"sort()전: ";
    for( ; it < v.end() ;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    it = v.begin();
    sort(v.begin(),v.end());
    cout<<"sort()후: ";
    for( ; it < v.end() ;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
