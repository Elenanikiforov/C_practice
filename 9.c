#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 6, M = 6;
    int a[6] = {1,2,3,4,5,5}, b[M];
    int i, j, flag = 0;

    for(i=0; i<N; i++){
        b[i] = a[i];
    }

    for(i=0; i<N; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}
