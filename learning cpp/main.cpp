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

 void show_digit(int N){
     if(N == 0){
         return;
     }
     else{
         show_digit(N/10);
         std::cout<<N%10<<" ";
     }
 }

 int main(){
     int N;
     std::cin>>N;
     show_digit(N);
     std::cout<<std::endl;
 }
