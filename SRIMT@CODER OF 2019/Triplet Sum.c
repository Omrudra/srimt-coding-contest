#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, i, *p,x,j,k;
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",p+i);
    }
    scanf("%d",&x);
    for(i=0;i<n-3;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(*(p+i)+*(p+j)+*(p+k)==x)
                {
                    printf("%d %d %d\n",*(p+i),*(p+j),*(p+k));
                    
                }
            }
        }
    }
    
    return 0;
}
