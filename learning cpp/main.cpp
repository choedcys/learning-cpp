#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
//#include "header.h"

double distance(int x1, int y1, int x2, int y2){
    double dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return dist;
}
int main(){
    int x1,y1,r1,x2,y2,r2,T;
    std::cin>>T;
    int *res = new int[T];
    for(int i = 0 ; i < T ; i++){
        std::cin>>x1>>y1>>r1>>x2>>y2>>r2;
        if((x1>=-10000 && x1 <=10000) && (y1>=-10000 && y1 <=10000) && (x2>=-10000 && x2 <=10000) && (y2>=-10000 && y2 <=10000) && (r1> 0 && r1 <=10000) && (r2> 0 && r2 <=10000)){
            if(distance(x1,y1,x2,y2) == r1+r2 || (distance(x1,y1,x2,y2) == abs(r1-r2) && r1!=r2))
                res[i] = 1;
            else if(distance(x1,y1,x2,y2) > r1+r2 || distance(x1,y1,x2,y2) < abs(r1-r2))
                res[i] = 0;
            else if(distance(x1,y1,x2,y2) == 0 && r1==r2)
                res[i] = -1;
            else
                res[i] = 2;
        }
        
    }
    for(int i = 0 ; i < T ; i++){
        std::cout<<res[i]<<std::endl;
    }
}
