#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i,n,t;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n==0||n==1||n==2||n==3||n==5||n==8||n==13||n==21||n==34||n==55||n==89)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
