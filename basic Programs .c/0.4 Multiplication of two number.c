#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Mult = 0;

    printf("\n Enter two numbers for multiplication");
    scanf("%d%d",&No1,&No2);

    Mult = No1 * No2;
    printf("multiplication of %d*%d = %d",No1,No2,Mult);

    getch();
    return 0;
}
