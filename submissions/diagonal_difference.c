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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }

    int primaryDiagonal;

    primaryDiagonal = 0;
    for( int i = 0; i < n; i++ ) {
        primaryDiagonal += a[i][i];
    }

    int secondaryDiagonal;

    secondaryDiagonal = 0;
    for( int i = 0; i < n; i++ ) {
        secondaryDiagonal += a[n - i - 1][i];
    }

    printf("%d", abs(primaryDiagonal - secondaryDiagonal));
    return 0;
}
