#include<stdio.h>
int main ()
{
int n,a[100],i,j;
printf("Enter the size of the array \n");
scanf("%d",&n);

printf("Enter the elements of the array \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("The array is: \n");
for(i=0;i<n;i++)
{
    printf("% 3d",a[i]);
}
int temp;

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i]=a[j];
            a[j] = temp;
        }
    }
}
printf("The array in ascd order: \n");
for(i=0;i<n;i++)
{
    printf("% 3d",a[i]);
}
return 0;
}