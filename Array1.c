#include<stdio.h>
int main()
{
   int a[5],i;
   printf("Enter the Array Elements: ");
   for(i=0;i<5;i++)
      {
        scanf("%d",&a[i]);
      }
   printf("The Array Elements are: ");

   for(i=0;i<5;i++)
       {
         printf("\n%d\n",a[i]);
       }
   return 0;
}
