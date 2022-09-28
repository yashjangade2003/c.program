#include<conio.h>
#include<stdio.h>

int main()
{
        int num = 0;

        printf("\n enter any number");
        scanf("%d",&num);

        if(num>0)
        {
            printf("\n positive number");
        }
        else
        {
            printf("\n negative number");
        }
        getch();
        return 0;
}
