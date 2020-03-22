#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int N = 10;
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int i, j, count, k;
  count = 0;
  for(i = 1; i < N; i=i + 2){

    if(a[i-1]%2==0 && a[i]%2!=0 || a[i-1]%2!=0 && a[i]%2==0){
        count++;
      }
    }
  k = sizeof(a)/sizeof(int) / 2;
  if(count == k){
    printf("Alternate");
  }else{
    printf("Don't alternate");
  }
  return 0;
}
