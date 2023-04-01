#include<stdio.h>
int main ()
{

int a[100],n,i,nsum=0,sum=0;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    nsum+= a[i];
}
printf("The sum without pointer is %d \n",nsum);
int *p = a;
// int p = &a;

for(i=0;i<n;i++)
{
    sum+= p[i];
}
printf("The sum of the array is %d \n",sum);
return 0;
}