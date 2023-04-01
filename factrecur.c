#include<stdio.h>

int Fact(int num){
    if(num==0)
    {
        return 1;
    }

    int factorial = num * Fact(num-1);
    return factorial;
}
int main ()
{
int num,fact;
printf("Enter the number \n");
scanf("%d",&num);
fact = Fact(num);
printf("The factorial of the numberis %d \n",fact); 
return 0;
}