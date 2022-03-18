#include<stdio.h>
void arr();
int main()
     {
     	  arr();
     	  return 0;
     }
   void arr()
      {
       	int a[50],n,i=0,sum=0;
       	printf("enter the limit:");
       	scanf("%d",&n);
       	printf("enter the elements:\n");
       	while(i<=n-1)
       	      {
       	      	scanf("%d",&a[i]);
       	      	i++;
       	      }
       	  
       	   for(i=0;i<n;i++)
       	       {
       	       	sum =sum+a[i];
       	       }
       	       	printf("sum of the array elements = %d",sum);
       	       
      }
