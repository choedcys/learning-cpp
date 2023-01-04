#include <iostream>

int main(){
    int T, N;
    int arr[2] = {1,1};
    int rot = 0;
    int **res = (int**)malloc(T*sizeof(int*));
    for(int i = 0 ; i < T ; i++){
        res[i] = (int*) malloc(sizeof(int)*2);
    }
    std::cin>>T;
    for(int i = 0 ; i < T ; i++){
        while(1){
            std::cin>>N;
            if(N <= 40 && N>= 0)
                break;
        }
        int temp1[2] = {1,0};
        int temp2[2] = {0,1};
        while(rot != N-1){
            arr[0] = temp1[0] + temp2[0];
            arr[1] = temp1[1] + temp2[1];
            temp1[0] = temp2[0];
            temp1[1] = temp2[1];
            temp2[0] = arr[0];
            temp2[1] = arr[1];
            rot++;
        }
        res[i][0] = arr[0];
        res[i][1] = arr[1];
        rot = 0;
    }
    for(int i = 0 ; i < T ; i++){
        std::cout<<res[i][0]<<" "<<res[i][1]<<std::endl;
    }
}
