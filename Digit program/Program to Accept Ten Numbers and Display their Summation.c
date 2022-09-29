#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0;

    printf("\n Enter 10 Numbers =>");

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n\t Enter Number %d =",Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }
    printf("\n press Any Key To Get Summation of Given Numbers =>");

     getch();
     return 0;

     printf("\n Summation of Given Number = %d",Sum);
}
