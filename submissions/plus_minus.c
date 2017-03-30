#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    int positive, negative, zero;
    positive = 0;
    negative = 0;
    zero = 0;

    for( int i = 0; i < n; i++ ) {
        if( arr[i] > 0 ) {
            positive++;
        } else if( arr[i] < 0 ) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("%.6f\n", (double) positive / n);
    printf("%.6f\n", (double) negative / n);
    printf("%.6f", (double) zero / n);

    return 0;
}
