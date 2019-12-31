#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m, i,j, *p,*q;
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",p+i);
    }
    scanf("%d",&m);
    q=(int*) malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",q+i);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(*(p+i)==*(q+j))
                printf("%d\n",*(p+i));
        }
    }
    return 0;
}
