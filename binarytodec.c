#include<stdio.h>
#include<math.h>
int main ()
{
int bin,dec=0,rem=0,i=0;
printf("Enter the binary number \n");
scanf("%d",&bin);

while(bin!=0)
{
    rem = bin%10;
    dec += rem* pow(2,i);
    i++;
    bin = bin/10;
}

printf("The decimal number is %d \n",dec);
return 0;
}