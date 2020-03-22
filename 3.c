#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int N = 10;
  int a[N];
  int i, j, count;

  count = 1;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
    for(j = 0; j<N;j++){
      if(a[i] == a[j] && i!=j){
        count++;
      }
    }

  }

  printf("\n%d\n", count);
  return 0;
}
