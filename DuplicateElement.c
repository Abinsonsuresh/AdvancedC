#include<stdio.h>
int main ()
{
int i, j,k;

int arr[] = {5, 5, 75, 100};
int len = sizeof (arr)/ sizeof arr[0] ;

for(i=0;i<len;i++)
{
    for(j=i+1;j<len;j++)
    {
        if(arr[i]==arr[j])
        {
            printf("% 2d",arr[i]);
            arr[i]=0;

    
        }
   
    }

}
for(i=0;i<len;i++)
{
        printf("% 3d",arr[i]);
}
return 0;
}