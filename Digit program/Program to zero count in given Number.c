#include<conio.h>
#include<stdio.h>

int main()
{
    int No = 0,Dig = 0,zCnt = 0,temp = 0;


    Up:
        printf("\n Enter positive Integer Number To Count Of Zero = ");
        scanf("%d",&No);

        if(No <= 0)
        {
            printf("\n Invalid Number.");
            getch();
            goto Up;
        }

        temp = No;

        while(temp > 10)
        {
            Dig = temp % 10;

            if(Dig == 0)
            {
                zCnt ++;
            }
            temp = temp / 10;
        }
        printf("\n Count of Zero in %d is = %d",No,zCnt);

        printf("\n Thanks !!!");

        getch();
        return 0;
}
