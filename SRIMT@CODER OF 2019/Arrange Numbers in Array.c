#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            printf("%d ",i);
    }
    for(i=n;i>1;i--)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}
