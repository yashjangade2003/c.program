#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:
        printf("===================*******===================");

        printf("\n Enter Positive Integer Number =");
        scanf("%d",&Num);

        if(Num <= 0)
        {
            printf("\n Invalid Number .\n\n please Enter Another Number.");
            getch();
            goto Up;
        }
        printf("\n Cube Of %d = %d",Num,Num*Num);

        printf("\n======================***********=================");

        printf("\n\n Thanks !!!!");

        getch();
        return 0;
}
