#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yyyy;
};
int main ()
{
    struct date D1,D2;
    int total=0,ydiff,x=0;
printf("<-----D1-------> \n");

printf("Enter the date in DD of D1 \n");
scanf("%d",&D1.dd);

printf("Enter the month in MM of D1 \n");
scanf("%d",&D1.mm);

printf("Enter the year in YYYY of D1 \n");
scanf("%d",&D1.yyyy);


printf("<-----D2-------> \n");

printf("Enter the date in DD of D2 \n");
scanf("%d",&D2.dd);

printf("Enter the month in MM of D2 \n");
scanf("%d",&D2.mm);

printf("Enter the year in YYYY of D2 \n");
scanf("%d",&D2.yyyy);

if(D1.dd > 30)
{
    printf("Enter the date again there are only 30 days in a month \n");
    printf("Of D1\n");
    scanf("%d",&D1.dd);
}
else if (D2.dd > 30)
{
    printf("Enter the date again there are only 30 days in a month \n");

    printf("Of D2\n");
    scanf("%d",&D2.dd);
}

// int elapsed = D2.dd - D1.dd;

printf("The date of D1 is % 2d % 2d % 2d \n",D1.dd,D1.mm,D1.yyyy);
printf("The date of D2 is % 2d % 2d % 2d \n",D2.dd,D2.mm,D2.yyyy);
// printf("The days elapsed between D2 and D1 is %d \n",elapsed);
ydiff = D1.yyyy - D2.yyyy;
x= ydiff * 360;
total += 30 - D1.dd;
total += D1.dd + D2.mm * 30;
total += D2.dd;

int elap = (360 - total) + x;

if(elap<0)
{
    elap = elap * -1;
}
printf("The days elapsed between D2 and D1 is %d \n",elap);




return 0;
}