#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int a[100][100],n,m,i,j;
    long int z,x;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%ld ",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j] > x)
                x = a[i][j];
        }
        z=x;
        for(j=0;j<m;j++)
        {
            if(a[i][j] < z)
                z = a[i][j];    
        }
        printf("%ld %ld\n",x,z);
    }
    return 0;
}
