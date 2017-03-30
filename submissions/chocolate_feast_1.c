#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int eaten(int n, int c, int m) {
    int eaten, wrappers;
    eaten = wrappers = n / c;
    int tmp;

    while( wrappers >= m ) {
        tmp = wrappers;
        wrappers = wrappers / m;
        eaten += wrappers;
        wrappers += tmp % m;
    }

    return eaten;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        scanf("%d %d %d",&n,&c,&m);
        printf("%d\n", eaten(n, c, m));
    }
    return 0;
}
