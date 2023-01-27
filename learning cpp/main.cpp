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

 void Space(int K){
     if(K == 0)
         return;
     else{
         std::cout<<" ";
         Space(K-1);
     }
 }
 void Sharp(int M){
     if(M==0){
         std::cout<<std::endl;
         return;
     }
     else{
         std::cout<<"#";
         Sharp(M-1);
     }
 }

 int main(){
     for(int i = 5 ; i >= 1 ; i--){
         Sharp(2*i-1);
         Space(6-i);
     }
 }
