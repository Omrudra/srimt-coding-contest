#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, i, *p;
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",p+i);
    }
    if(n%2==0)
    {   
    for(i=0;i<n;i++)
    {
        
        if(i%2==0)
            printf("%d ",*(p+i+1));
        if(i%2==1) 
            printf("%d ",*(p+i-1));
    }
    }
    else
    {
    for(i=0;i<n-1;i++)
    {
        
        if(i%2==0)
            printf("%d ",*(p+i+1));
        if(i%2==1) 
            printf("%d ",*(p+i-1));
    }
        printf("%d",*(p+i));
        
    }
    return 0;
}
