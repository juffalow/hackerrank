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
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }

    int max = 0;
    int sum = 0;
    for( int i = 0; i < n; i++ ) {
        if( height[i] > max ) {
            max = height[i];
            sum = 1;
        } else if( height[i] == max ) {
            sum++;
        }
    }

    printf("%d", sum);
    return 0;
}
