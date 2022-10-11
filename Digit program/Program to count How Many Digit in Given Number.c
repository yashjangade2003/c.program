#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Dcnt = 0,Temp = 0;

    Up:
        printf("\n Enter positive Integer Number To Calculate Its Digit Sum = ");
        scanf("%d",&No);

        Temp = No;

        if(No < 0)
        {
            printf("\n Invalid Input....");
            goto Up;
        }
        while(Temp > 0)
        {
            Dcnt++;
            Temp = Temp / 10;
        }
        printf("\n\n Number Of Digit In Given Number %d is = %d",No,Dcnt);

        getch();
        return 0;
}
