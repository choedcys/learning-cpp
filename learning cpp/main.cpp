#include <iostream>
class MoneyBox{
    int val = 0;
public:
    int operator()(int temp){
        val += temp;
        return val;
    }
};

int main(){
    MoneyBox moneyBox;
    std::cout<<"moneyBox(100): "<<moneyBox(100)<<std::endl;
    std::cout<<"moneyBox(500): "<<moneyBox(500)<<std::endl;
    std::cout<<"moneyBox(2000): "<<moneyBox(2000)<<std::endl;
    return 0;
}
