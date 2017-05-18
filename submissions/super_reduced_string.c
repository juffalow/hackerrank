#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[101];
    fgets(str, 101, stdin);

    char result[100] = "";

    if( strlen(str) > 0 ) {
        result[0] = str[0];
        int index = 0;
        for( int i = 1; i < strlen(str); i++ ) {
            if( i == -1 || result[index] != str[i] ) {
                index++;
                result[index] = str[i];
            } else {
                result[index] = '\0';
                if( index >= 0 ) {
                    index--;
                }
            }
        }
    }

    if( strlen(result) == 0 ) {
        printf("Empty String");
    } else {
        printf("%s", result);
    }

    return 0;
}
