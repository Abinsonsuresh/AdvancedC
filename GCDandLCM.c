#include<stdio.h>

int GCDNum(int n1, int n2)
{

    int i,gcd;
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
    }

    return gcd;
}
int main ()
{
int num1, num2, gcd,lcm;
printf("Enter the two numbers \n");
scanf("%d%d",&num1,&num2);
gcd = GCDNum(num1,num2);
printf("The gcd of the two number is %d \n",gcd);
lcm = (num1*num2)/gcd;
printf("LCM of the two numbers is %d \n",lcm);
return 0;
}