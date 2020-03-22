#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  srand(time(NULL));
  int N = 10;
  int a[N];
  int i, pos;
  double num = 28., n;
  printf("%lf\n\n", num);
  n = num;
  for(i = 0; i < N; i++){
    a[i] = rand()%50;
    printf("%d\n", a[i]);
    if(abs(num-a[i])<n){
      n = abs(num-a[i]);
      pos = i;
    }


  }
  printf("\n");
  printf("%d\n", a[pos]);
  return 0;
}
