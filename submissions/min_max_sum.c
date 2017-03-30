#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int compare(const void* a, const void* b) {
    long int li_a = * ( (long int*) a );
    long int li_b = * ( (long int*) b );

    if ( li_a == li_b ) {
        return 0;
    } else if( li_a < li_b ) {
        return -1;
    } else {
        return 1;
    }
}

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

    long int array[5] = {a, b, c, d, e};

    qsort( array, 5, sizeof(long int), compare );

    printf("%ld %ld", array[0] + array[1] + array[2] + array[3], array[4] + array[3] + array[2] + array[1]);

    return 0;
}
