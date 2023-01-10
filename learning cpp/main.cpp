#include <iostream>

template <typename T>
class Complex{
public:
    Complex(){}
    T operator()(T temp1,T temp2){
        return temp1*temp2;
    }
};

int main(){
    Complex<int> comp;
    std::cout<<"2 * 7 = "<<comp(2, 7)<<std::endl;
    return 0;
}
