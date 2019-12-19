//Solution in C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n,p,k;
    scanf("%d",&n);
    for(i=n,p=0;i>=1,p<n;i--,p++){
        for(j=i*2-2;j>=1;j--){
            printf(" ");
        }
        for(k=1+(p*4);k>=1;k--){
            if(k%2==0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
