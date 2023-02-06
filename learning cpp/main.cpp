#include<iostream>
using namespace std;
void initialize(int *arr, int n){
    for(int i = 0 ; i < n+1 ; i++){
        arr[i] = i;
    }
}

int find(int *arr, int a){
    if(arr[a] == a)
        return a;
    else
        return arr[a] = find(arr,arr[a]);
}

void Union(int *arr, int a, int b){
    a = find(arr, a);
    b = find(arr,b);
    if(a != b){
        arr[b] = a;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    int cal, a,b;
    cin>>n>>m;
    int *arr = new int[n+1];
    initialize(arr, n);
    for(int i = 0 ; i < m ; i++){
        std::cin>>cal>>a>>b;
        if(cal == 0){
            Union(arr,a,b);
        }
        else if(cal == 1){
            if(find(arr,a)==find(arr,b)){
                cout<<"YES"<<"\n";
            }
            else
                cout<<"NO"<<"\n";
        }
    }
}
