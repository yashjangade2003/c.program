#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0,Num2 = 0;

    printf("\n Enter Two Integer Numbers = ");
    scanf("%d%d",&Num1,&Num2);

    (Num1==Num2) ? printf("\n Both Given Number Are Equal."):((Num1>Num2)? printf("\n Number %d is maximum.",Num1):printf("\n Number %d is Maximum.",Num2));

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
