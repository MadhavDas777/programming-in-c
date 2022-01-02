#include <stdio.h>
int main()
{
int ch,n,i,fact=1,count=0;
while(ch!=4)
 {
printf("\n**MENU**\n");
printf("1.FACTORIAL OF A NUMBER\n2.PRIME OR NOT\n3.ODD OR EVEN\n4.EXIT\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
   {
     case 1:
        printf("FACTORIAL OF A NUMBER\n");
        printf("Enter the Number:");
        scanf("%d",&n);
        for(i=n;i>0;i--)
           {
             fact=fact*i;
           }
        printf("The Factorial of %d is %d",n,fact);
        break;
        
     case 2:
        printf("PRIME OR NOT\n");
        printf("Enter the Number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
           {
             if(n%i==0)
             count++;
           }
        if(count==2)
           { 
             printf("%d is a Prime Number",n);
           }
        else
           {
             printf("%d is not a Prime Number",n);
           }
        break;
        
      case 3:
         printf("ODD OR EVEN\n");
         printf("Enter the Number:");
         scanf("%d",&n);
         if(n%2==0)
            {
              printf("%d is Even",n);
            }
         else
            {
              printf("%d is Odd",n);
            }
         break;
        
        case 4:
           printf("EXIT");
        break;
   } 
 }
}
