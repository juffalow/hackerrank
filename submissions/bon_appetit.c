#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    int sum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);
        sum += arr[arr_i];
    }
    sum -= arr[k];

    int b;
    scanf("%d", &b);

    if( sum / 2 == b ) {
        printf("Bon Appetit");
    } else {
        printf("%d", b - (sum / 2));
    }

    return 0;
}
