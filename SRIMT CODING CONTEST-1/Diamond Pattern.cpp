#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n,p,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            if(k%2==0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=1,p=n-1;i<=n-1,p>=1;i++,p--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=p*2-1;k>=1;k--){
            if(k%2==0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
