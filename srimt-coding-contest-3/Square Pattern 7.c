#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i%2==0 && j==0)
                printf("%d ",i+1);
            else if(i%2!=0 && j==n)
                printf("%d ",i+1);
            else
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}            
