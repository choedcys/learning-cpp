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

 void Binary(int N){
     if(N < 2){
         
     }
     else{
         Binary(N/2);
     }
     std::cout<<N%2;
 }

 int main(){
     int N;
     std::cin>>N;
     Binary(N);
     std::cout<<std::endl;
 }
