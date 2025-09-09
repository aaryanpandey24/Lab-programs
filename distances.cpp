#include <iostream>
#include <vector>
#include <algorithm>
struct distances
    { int km;
        int m;

        /* data */
    };

using namespace std;

int main()
{
    
    


struct distances d1;
struct distances d2;
struct distances d3;

cout<< "Enter two distances in km and m";
cin>> d1.km >> d1.m>>d2.km>>d2.m;
d3.km=d1.km+d2.km + d1.km/1000 +d2.km/1000;
d3.m=d1.m%1000 + d2.m%1000;

cout<< d3.km<< "\n"<<d3.m;



}