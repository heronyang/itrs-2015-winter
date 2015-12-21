#include <stdio.h>

/*
 * Fab Series
 * 1 1 3 5 8 13 ...
 */

int fab(int n) {
    if(n <= 2) return 1;
    return fab(n-1) + fab(n-2);
}

int main() {

    int i;

    for( i = 1; i < 10; i ++ ) {
        printf("fab(%d) = %d\n", i, fab(i));
    }

    return 0;
}
