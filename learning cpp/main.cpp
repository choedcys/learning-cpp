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

 void func(int N){
     if(N == 0){
         return;
     }
     else{
         std::cout<<N%10<<" ";
         func(N/10);
     }
 }

 int main(){
     int N;
     std::cin>>N;
     func(N);
     std::cout<<std::endl;
 }
