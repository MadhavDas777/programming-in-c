#include<stdio.h>
int main()
{
    int i,j;
   for(i=1;i<=5;i++)
    {
       for(j=i;j<=5;j++)
      {
        
       printf("%d\t",j);
      }
       printf("\n");
    }
    getchar();
    return 0;
}