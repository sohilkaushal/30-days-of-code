#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printEvenString(string str) {
    int k = str.length();
    for(int i = 0; i < k; i++)
        if(i % 2 == 0) 
            cout << str[i];
}

void printOddString(string str) {
    int k = str.length();
    for(int i = 0; i < k; i++)
        if(i % 2 == 1) 
            cout << str[i];
}
int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        string str;
        cin >> str;
        printEvenString(str);
        cout << " ";
        printOddString(str);
        cout << endl;
    }
    return 0;
}