#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<cmath>
class acc{
    int sum = 1;
public:
    int operator()(int temp){
        sum *= temp;
        return sum;
    }
};
int main(){
    acc obj;
    std::vector<int> v1 = {10, 20, 30, 40, 50};
    std::vector<int> v2 = {1, 2, 3, 4, 5};
    std::vector<int> v3;
    std::vector<int>::iterator it1 = v1.begin();
    std::vector<int>::iterator it2 = v2.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back(*it1+*it2);
        it2++;
    }
    std::vector<int>::iterator it3 = v3.begin();
    it1 = v1.begin();
    it2 = v2.begin();
    std::cout<<"v1: ";
    for( ; it1 != v1.end() ; it1++){
        std::cout<<*it1<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"v2: ";
    for( ; it2 != v2.end() ; it2++){
        std::cout<<*it2<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"v3(v1+v2): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    v3 = {};
    it1 = v1.begin();
    it2 = v2.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back((*it1)*(*it2));
        it2++;
    }
    it3 = v3.begin();
    std::cout<<"v3(v1*v2): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    v3 = {};
    it1 = v1.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back(-(*it1));
    }
    it3 = v3.begin();
    std::cout<<"v3(-v1): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    v3 = {};
    it1 = v1.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back(abs((*it1)-*(it1+1)));
    }
    it3 = v3.begin();
    std::cout<<"v3(v1 인접 원소와의 차): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    v3 = {};
    it1 = v1.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back(abs((*it1)-*(it1+1)));
    }
    it3 = v3.begin();
    std::cout<<"v3(v1 인접 원소와의 차): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    v3 = {};
    it1 = v1.begin();
    for( ; it1 != v1.end() ; it1++){
        v3.push_back(obj(*it1));
    }
    it3 = v3.begin();
    std::cout<<"v3(v1 원소의 곱 누적): ";
    for( ; it3 != v3.end() ; it3++){
        std::cout<<*it3<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"v1 모든 원소의 곱: ";
    std::cout<<*(v3.end()-1)<<std::endl;
}

