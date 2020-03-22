#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N = 5, M = 5;
    int a[5] = {1,2,3,4,5}, b[5] = {6,7,8,9,5};
    int i, j, flag = 0;

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            if(a[i] == b[j])
                flag++;
        }
    }
    printf("%d", flag);
    return 0;
}
