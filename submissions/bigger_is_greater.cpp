#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int tests;
    cin >> tests;

    string str;
    for( int i = 0; i < tests; i++ ) {
        cin >> str;
        if( next_permutation(str.begin(), str.end()) != 0 ) {
            cout << str << "\n";
        } else {
            cout << "no answer" << "\n";
        }
    }

    return 0;
}
