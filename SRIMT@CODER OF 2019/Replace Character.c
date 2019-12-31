#include<stdio.h>
int main()
{
  int i;
  char string[100], orginal, replace;
  gets(string);
  orginal = getchar();
  getchar();
  replace = getchar();
  for (i=0;i<strlen(string);i++)
  {
     if(string[i]==orginal)
       string[i]=replace;
  }
  printf("%s",string);
    return 0;
}
