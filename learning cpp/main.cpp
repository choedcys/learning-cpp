#include<iostream>
#include<algorithm>

int BinarySearch(int *arr, int Key, int end, int start){
    int mid = (end+start)/2;
    if(arr[mid] == Key){
        return mid;
    }
    else if(arr[start] == Key){
        return start;
    }
    else if(arr[end] == Key){
        return end;
    }
    else if(mid - start == 1){
        return -1;
    }
    else if(arr[mid] < Key){
        return BinarySearch(arr, Key, end, start+mid/2);
    }
    else{
        return BinarySearch(arr, Key, end-mid/2, start);
    }
}

int main(){
    int Key;
    int arr[15] = {2,5,34,32,1,4,8,10,23,26,17,19,21,24,6};
    std::sort(arr,arr+15);
    for(int i = 0 ; i < 15 ; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0 ; i < 15 ; i++){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cin>>Key;
    if(BinarySearch(arr, Key, (sizeof(arr)/4)-1,0) != -1){
        std::cout<<BinarySearch(arr, Key, (sizeof(arr)/4)-1,0)<<std::endl;
    }
    else{
        std::cout<<"그런 값이 없음"<<std::endl;
    }
}
