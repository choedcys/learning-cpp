#include <iostream>

class Linear{
    double a;
    double b;
public:
    Linear(double s = 1, double y = 0):a(s),b(y){}
    double operator()(double x) {return b + a*x;}
};

int main(){
    Linear f1;
    Linear f2(2.5, 10.0);
    double y1 = f1(12.5);
    double y2 = f2(0.4);
    std::cout<<y1<<" "<<y2 <<std::endl;
    return 0;
}
