#include <stdio.h>
int main()
{
int n,sum=0,R,x;
printf("Enter the Number:");
scanf("%d",&n);
x=n;
while(n>0)
    {
       R=n%10;
       sum=sum*10+R;
       n=n/10;
    }
printf("Reverse of %d is %d",x,sum);
return 0;
}    
