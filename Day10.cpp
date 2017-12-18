#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int num;
    cin >> num;
    int o = 0, maxO = 0;
    while(num != 0) {
        if(num % 2 == 1) {
            o += 1;
            if(o > maxO) {
                maxO = o;
            }
        }
        else {
            o = 0;
        }
        num = num / 2;
    }
    cout << maxO;
    return 0;
}