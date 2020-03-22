#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int N = 10;
  srand(time(NULL));
  int i, j, n,count;
  int a[N], b[N];
  for(i = 1; i <= N; i++){
    a[i] = rand()%50;
  }


  n = a[0];
  count = 1;
  for(i = 1; i < N; i++){
    if(n<a[i]){
      n = a[i];
      count++;
    }

  }
  if (count==10){
    printf("increase", count);
  }else{
    printf("Not increase");
  }
  return 0;
}
