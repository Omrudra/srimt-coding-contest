#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,*p,i,num,flag=0,a=0;
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==num)
        {
            flag=1;
            a=i;
        }
    }
    if(flag==1)
        printf("%d",a);
    else 
        printf("-1");
    return 0;
}
