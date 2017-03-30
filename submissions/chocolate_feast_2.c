#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        scanf("%d %d %d",&n,&c,&m);

        int bought = n / c;
        printf("%d\n", bought + ((bought - 1) / (m - 1)));
    }
    return 0;
}
