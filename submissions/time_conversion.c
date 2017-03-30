#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);

    int hours = ((time[0] - 48) * 10) + (time[1] - 48);
    int minutes = ((time[3] - 48) * 10) + (time[4] - 48);
    int seconds = ((time[6] - 48) * 10) + (time[7] - 48);

    if( time[8] == 'P' && time[9] == 'M' && !(time[0] == '1' && time[1] == '2') ) {
        hours += 12;
    }

    if( time[8] == 'A' && time[9] == 'M' && time[0] == '1' && time[1] == '2' ) {
        hours += 12;
    }

    hours = hours % 24;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
