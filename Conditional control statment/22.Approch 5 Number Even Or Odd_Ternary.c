#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter An Integer Number To Check Whether it is Even Or Odd = ");
    Up:
        scanf("%d",&Num);

        if(Num == 0)
        {
            printf("\n Given Number Is Neutral .\n\n Please Enter Other Than Zero Integer To Check it is Even Or Odd =");
            goto Up;
        }

        (Num % 2 == 0)? printf("\n Given Number Is Even ."):printf("\n Given Number Is Odd");

        printf("\n\n Thanks !!!");

        getch();
        return 0;
}
