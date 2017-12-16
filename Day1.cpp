#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    cin>>a;
    int x=a+i;
    cout<<x<<endl;
    double b;
    cin>>b;
    double t=b+d;
    cout<<fixed<<setprecision(1)<<t;
    string k;
    cin.ignore();
    getline(cin, k);
    string l=s+k;
    cout<<"\n"<<l;
    return 0;
}