#include<iostream>
#include<vector>
int main(){
    int N,M,sum=0,cnt=0;
    std::vector<int> vec;
    std::cin>>N>>M;
    int *A = new int[N];
    for(int i = 0 ; i < N ; i++){
        std::cin>>A[i];
    }
    for(int col = 0 ; col < N ; col++){
        for(int row = col ; row <= N ; row++){
            for(int val = col ; val < row ; val++){
                sum+=A[val];
            }
            vec.push_back(sum);
            sum=0;
        }
    }
    std::vector<int>::iterator it = vec.begin();
    for( ; it!=vec.end();it++){
        if(M==*it)
            cnt++;
    }
    std::cout<<cnt<<std::endl;
}
