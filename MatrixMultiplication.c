#include<stdio.h>
int main ()
{
    int a[50][50],b[50][50],c[50][50],d[50][50],num,i,j,k,row1,col1,row2,col2,multi;
    printf("Enter the no. of rows and colums of matrix 1\n");
    scanf("%d %d",&row1,&col1);

    printf("Enter the Matrix 1\n");

    for(i=0;i<row1;i++)
    {   
        for(j=0;j<col1;j++)
        {
        printf("%d%d ",i,j);
        scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix 1 is ready \n");
    for(i=0;i<row1;i++)
    {   
        for(j=0;j<col1;j++)
        {            
        printf("% 3d",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the rows and cols of Matrix 2\n");
    scanf("%d %d",&row2,&col2);


    for(i=0;i<row2;i++)
    {   
        for(j=0;j<col2;j++)
        {
            
        printf("%d%d",i,j);
        scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix 2 is ready \n");
    for(i=0;i<row2;i++)
    {   
        for(j=0;j<col2;j++)
        {            
        printf("% 3d",b[i][j]);
        }
        printf("\n");
    }


    // Transpose Matrix
    // printf("The transpose of the matrix A is: \n");

    // for(i=0;i<row1;i++)
    // {   
    //     for(j=0;j<col1;j++)
    //     {            
    //     c[i][j] = a[j][i];
    //     }
    // }

    // for(i=0;i<row1;i++)
    // {   
    //     for(j=0;j<col1;j++)
    //     {            
    //      printf("% 3d",c[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("The Multiplied matrix is: \n");

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            int sum =0;
            for(k=0;k<col1;k++)
            {
                sum = sum +  a[i][k] * b[k][j];
                d[i][j] = sum;
            }
            // multi = 0;
        }
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("% 3d",d[i][j]);  
        }
        printf("\n");
    }

return 0;
}