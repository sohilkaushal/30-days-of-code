#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float a,b,c,d,e;
    cin>>a>>b>>c;
    d=(a*b)/100;
    e=(a*c)/100;
    float res=a+d+e;
    res=round(res);
    cout<<"The total meal cost is "<<res<<" dollars."<<endl; 
    return 0;
}