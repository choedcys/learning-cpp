//#include<iostream>
//
//int BinarySearch(){
//
//}
//int main(){
//    int Key;
//    int arr[15] = {2,5,34,32,1,4,8,10,23,26,17,19,21,23,6};
//    std::cin>>
//}


#include <iostream>

 int Comp(int N,int K){
     if(K==0){
         return 1;
     }
     else{
         return N*Comp(N,K-1);
     }
 }

 int main(){
     int N,K;
     std::cin>>N>>K;
     std::cout<<Comp(N,K);
     std::cout<<std::endl;
 }
