#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int compare (const void *a, const void * b) {
    return ( *(char *)a - *(char *)b );
}

void swap (char* a, char* b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int findCeil (char str[], char first, int l, int h) {
    int ceilIndex = l;

    for( int i = l+1; i <= h; i++ ) {
        if( str[i] > first && str[i] < str[ceilIndex] ) {
            ceilIndex = i;
        }
    }

    return ceilIndex;
}

bool nextPermutation(char* str) {
    int size = strlen(str);

    int i;
    for ( i = size - 2; i >= 0; --i ) {
        if( str[i] < str[i + 1] ) {
            break;
        }
    }

    if( i == -1 ) {
        return false;
    } else {
        int ceilIndex = findCeil( str, str[i], i + 1, size - 1 );

        swap( &str[i], &str[ceilIndex] );

        qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare );
    }
    return true;
}

int main() {
    int tests;
    cin >> tests;

    string str;
    for( int i = 0; i < tests; i++ ) {
        cin >> str;
        char *cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        if( nextPermutation(cstr) ) {
            cout << cstr << "\n";
        } else {
            cout << "no answer\n";
        }
    }

    return 0;
}
