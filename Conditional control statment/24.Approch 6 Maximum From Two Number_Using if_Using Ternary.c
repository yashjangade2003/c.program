#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    Up:
        printf("\n\n Enter Two Numbers To Find Maximum From Them =>");

        printf("\n\n Enter First Number :");
        scanf("%d",&No1);

        printf("\n\n Enter Second Number :");
        scanf("%d",&No2);

        if(No1 == No2)
        {
            printf("\n Both Number Are Equal .");
            printf("\n\n To Compare There Must Two Different Numbers.");

            printf("\n==================**********=====================");
            goto Up;
        }
        (No1 > No2) ? printf("\n Number %d is Maximum",No1):printf("\n Number %d Is Maximum",No2);

        printf("\n Thanks !!!!");

        getch();
        return 0;

}
