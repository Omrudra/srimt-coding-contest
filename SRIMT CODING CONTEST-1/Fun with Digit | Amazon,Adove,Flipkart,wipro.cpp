#include <stdio.h>
int main() {
     unsigned long long int N;
     unsigned long long int arr[1000];
    int i,j=0;
    scanf("%llu",&N);
    if(N<10)
    { 
      printf("%llu",N); 
    }
   else
    for (i=9; i>1; i--) 
    { 
        while (N%i == 0) 
        { 
            N = N/i; 
            arr[j++] = i; 
  } 
    } 
    if(N>10)
    {
        printf("-1");
    }
    else
    for (i=j-1;i>=0;i--) 
        printf("%llu",arr[i]);
    return 0;
}	
