#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int N = 6;
  int a[] = {1,2,3,3,2,1};
  int i;

  for (i=0; i<N; i++){
    if(a[i] != a[N-i-1]){
      printf("Unbalanced\n");
      return 1;
    }
  }
  printf("Symmetric\n");
  return 0;
}
