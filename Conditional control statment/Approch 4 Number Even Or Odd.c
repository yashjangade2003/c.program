#include<stdio.h>
#include<conio.h>

int mian()
{
    int Num = 0;

    printf("\n Enter A Number = ");
    scanf("%d",&Num);

    (Num == 0) ? printf("\n %d is Neutral Number ",Num):(Num % 2 == 0) ? printf("\n %d is Even Number",Num): printf("\n %d is Odd Number",Num);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;

}
