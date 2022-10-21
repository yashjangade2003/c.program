#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:
        printf("\n Enter a Number =");
        scanf("%d",&Num);

        if(Num == 0)
        {
            printf("\n %d Neutral Number.\n\n Please Enter Another Number =");
            goto Up;
        }

        (Num > 0)? printf("\n %d is Positive Number.",Num): printf("\n %d Negative Number.",Num);

        printf("\n Thanks !!!!");

        getch();
        return 0;
}
