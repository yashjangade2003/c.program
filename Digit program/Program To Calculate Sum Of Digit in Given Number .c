#include<conio.h>
#include<stdio.h>

int main()
{
    int No = 0,Dig = 0,Dsum =0,Temp = 0;

    Up:
        printf("\n Enter Positive Integer Number To Calculate Its Digit sum =");
        scanf("%d",&No);

        Temp = No;

        if(No < 0)
        {
            printf("\n Invalid Input......");
            goto Up;
        }
        while(Temp > 0)
        {
            Dig = Temp %10;
            Dsum = Dsum + Dig;
            Temp = Temp / 10;
        }
        printf("\n\n sum of Digit in given Number %d = %d",No,Dsum);

        getch();
        return 0;
}
