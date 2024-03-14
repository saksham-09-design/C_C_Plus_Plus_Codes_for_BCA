#include<stdio.h>
void main()
{
int a[100],n,i,j,k;
printf("how many elements");
scanf("%d",&n);
  for(i=0;i<n;i++){
  printf("enter a no");
  scanf("%d",&a[i]);
  }

  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
   {
    if(a[j]>a[j+1])
    {
     k=a[j];
     a[j]=a[j+1];
     a[j+1]=k;
    }
   }
  }

  for(i=0;i<n;i++)
  {
  printf("the list is %d",a[i]);
  }
 }
