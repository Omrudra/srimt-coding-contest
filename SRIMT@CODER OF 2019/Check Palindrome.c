#include <stdio.h>
#include <string.h>
 
int main()
{
      char str[100];
      int i, len, stratIndex, endIndex;
      gets(str);
      len = strlen(str);
      endIndex = len - 1;              
      for(i = 0; i <= endIndex; i++)
       {
        if(str[i] != str[endIndex])
        {
            break;    
        } 
        endIndex--;        
      }
    if(i >= endIndex)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }    
    
      return 0;
}
