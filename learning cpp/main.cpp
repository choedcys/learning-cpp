#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double calculate(vector<double>t){
    vector<double>::iterator it = t.begin();
    double sum = 0.0;
    sort(t.begin(),t.end());
    it++;
    for( ; it < t.end() ; it++)
        sum += *it;
    it--;
    sum -= *it;
    return sum;
}

int main(){
    vector<double> v;
    double temp;
    
    for(int i = 0 ; i < 10 ; i++){
        cout<<"점수를 입력하시오: ";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"최종점수: "<<calculate(v);
    return 0;
}
