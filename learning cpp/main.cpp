#include<iostream>
//#include<vector>
//int main(){
//    int Num, rotate;
//    int cnt;
//    std::cin>>Num>>rotate;
//    int *basket = new int[Num];
//    for(int i = 0 ; i < Num ; i++){
//        basket[i] = i+1;
//    }
//    for(int cursor = 0 ; cursor < rotate ; cursor++){
//        int start, end, mid;
//        std::vector<int>one, two,three;
//        std::cin>>start>>end>>mid;
//        for(int i = end+1 ; i < Num+1 ; i++){
//            three.push_back(basket[i]);
//        }
//        for(int i = mid ; i < end ; i++){
//            two.push_back(basket[i]);
//        }
//        for(int i = 0 ; i < mid-end ; i++){
//            std::cout<<two[i];
//        }
//    }
//}
int main(){
    int arr1[6] = {3,6,0,0,0,10};
    int arr2[6] = {10,4,3,0,0,0};
    printf("다항식1: ");
    for(int i = 5 ; i >= 0 ; i--){
        if(arr1[i] != 0 && (i != 0 && i !=1))
            printf("%dx^%d+",arr1[i],i);
        else if(arr1[i] != 0 && i == 1)
            printf("%dx+",arr1[i]);
        else if(arr1[i] != 0 && i == 0)
            printf("%d",arr1[i]);
    }
    printf("\n");
    printf("다항식2: ");
    for(int i = 5 ; i >= 0 ; i--){
        if(arr2[i] != 0 && (i != 0 && i !=1))
            printf("%dx^%d+",arr2[i],i);
        else if(arr2[i] != 0 && i == 1)
            printf("%dx+",arr2[i]);
        else if(arr2[i] != 0 && i == 0)
            printf("%d",arr2[i]);
    }
    printf("\n");
    printf("다항식합: ");
    for(int i = 5 ; i >= 0 ; i--){
        if(arr1[i]+arr2[i] != 0 && (i != 0 && i !=1))
            printf("%dx^%d+",arr1[i]+arr2[i],i);
        else if(arr1[i]+arr2[i] != 0 && i == 1)
            printf("%dx+",arr1[i]+arr2[i]);
        else if(arr1[i]+arr2[i] != 0 && i == 0)
            printf("%d",arr1[i]+arr2[i]);
    }
    printf("\n");
}
