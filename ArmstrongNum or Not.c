#include <stdio.h>
int main()
{
int n,sum=0,R,x,y;
printf("Enter the Number:");
scanf("%d",&n);
x=n;
while(n>0)
    {
       R=n%10;
       y=R*R*R;
       sum=sum+y;
       n=n/10;
    }
if(sum==x)
    {
       printf("%d is an Armstrong Number",x);
    }
else
    {
       printf("%d is not an Armstrong Number",x);
    }
return 0;
}
