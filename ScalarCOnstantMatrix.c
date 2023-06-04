#include<stdio.h>
int main ()
{
int a[50][50],b[50][50],i,j,row,col;
printf("Enter the row and cols of the araay \n");
scanf("%d %d",&row,&col);

    printf("Enter the Matrix 1\n");

    for(i=0;i<row;i++)
    {   
        for(j=0;j<col;j++)
        {
        printf("%d%d ",i,j);
        scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix  is ready \n");
    for(i=0;i<row;i++)
    {   
        for(j=0;j<col;j++)
        {            
        printf("% 3d",a[i][j]);
        }
        printf("\n");
    }

int k,flag=0;
printf("Enter the scalar constant \n");
scanf("%d",&k);

    for(i=0;i<row;i++)
    {   
        for(j=0;j<col;j++)
        {            
        if(a[i][j] == k)
        {
            flag++;
        }
        }

    }

    printf("The no. of scalar constants in the matrix is %d \n",flag);
  
    if(flag==0)
    {
    for(i=0;i<row;i++)
    {   
        for(j=0;j<col;j++)
        {            
        b[i][j] = a[i][j] * k;
        }

    }
    }
    printf("The scalar matrix is : \n");
    for(i=0;i<row;i++)
    {   
        for(j=0;j<col;j++)
        {            
        printf("% 3d",b[i][j]);
        }
        printf("\n");
    }
return 0;
}