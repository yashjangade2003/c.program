#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Div = 0;

    printf("\n Enter two numbers for Division");
    scanf("%d%d",&No1,&No2);

    Div = No1 / No2;
    printf("Division of %d/%d = %d",No1,No2,Div);

    getch();
    return 0;
}
