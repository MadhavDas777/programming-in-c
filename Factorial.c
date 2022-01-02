#include <stdio.h>
int main()
{
int n,i,fact;
printf("Enter the Number:");
scanf("%d",&n);
for(i=n;i>0;i--)
   {
      fact=fact*i;
   }
printf("The Factorial of %d is %d",n,fact);
return 0;
}
