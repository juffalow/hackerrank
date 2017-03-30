#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int compare(a, b) {
    if( a > b ) {
        return 1;
    }
    return 0;
}

int main(){
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);

    int alice;
    int bob;

    alice = compare(a0, b0) + compare(a1, b1) + compare(a2, b2);
    bob = compare(b0, a0) + compare(b1, a1) + compare(b2, a2);

    printf("%d %d", alice, bob);

    return 0;
}
