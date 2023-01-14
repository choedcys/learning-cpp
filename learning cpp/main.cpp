#include <iostream>
#include <algorithm>
#include <array>

bool compare(int a, int b){return a > b;}

int main(){
    std::array<int, 10> arr1 = {5, 4, 2, 1, 100, 32, 2, 4, 6, 9};
    std::array<int, 10> arr2 = {5, 4, 2, 1, 100, 32, 2, 4, 6, 9};
    std::array<int, 10> arr3 = {5, 4, 2, 1, 100, 32, 2, 4, 6, 9};
    
    std::sort(arr1.begin(), arr1.end());
    std::cout << "std::sort(arr1, arr1 + 10)"<<std::endl;
    for(int val : arr1){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl<<std::endl;
    
    std::cout << "std::sort(arr, arr + 10, compare): "<<std::endl;
    std::sort(arr2.begin(), arr2.end(), compare);
    for(int val : arr2){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl<<std::endl;
    
    std::cout<<"std::sort(arr, arr + 10, [](int a, int b){return a > b;})"<<std::endl;
    std::sort(arr3.begin(), arr3.end(), [](int a, int b){return a > b;});
    for(int val : arr3){
        std::cout<<val<<" ";
    }
    
    return 0;
}
