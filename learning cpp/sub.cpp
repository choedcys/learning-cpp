#include"header.h"
#include<iostream>
using namespace std;

Point::Point(){}
Point::Point(int temp1, int temp2):x(temp1), y(temp2){}
void Point::display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
Point Point::operator+(Point temp){
    Point res;
    res.x = this->x + temp.x;
    res.y = this->y + temp.y;
    return res;
}
Point Point::operator-(Point temp){
    Point res;
    res.x = this->x - temp.x;
    res.y = this->y - temp.y;
    return res;
}
