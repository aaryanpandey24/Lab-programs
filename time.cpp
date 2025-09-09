#include <iostream>
#include <vector>
#include <algorithm>
struct distances
    { int km;
        int m;
        int s;
        /* data */
    };

using namespace std;

int main()
{
    
    


struct distances d1;
struct distances d2;
struct distances d3;

cout<< "Enter two measurements in hour minutes and seconds in km and m";
cin>> d1.km >> d1.m>> d1.s>>d2.km>>d2.m>>d2.s;
d3.km=d1.km+d2.km+ d1.m/60 +d2.m/60+d1.s/(60*60) +d2.s/(60*60);
d3.m=d1.m%60 + d2.m%60 + d1.s/60 + d2.m/60 ;
d3.s=d1.s%60+d2.s%60;

cout<< d3.km<< "\n"<<d3.m<<"\n"<<d3.s;



}