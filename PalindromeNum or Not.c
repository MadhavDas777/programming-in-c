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
if(sum==x)
    {
       printf("The given Number is a palindrome",sum);
    }
else
    {
       printf("The given Number is not a palindrome",sum);
    }
return 0;
}
