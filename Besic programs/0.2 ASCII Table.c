#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0;

        printf("\n ASCII Table => \n\n");

        for(No = 0; No < 128; No++)
        {
            printf("\n %d = %c", No,No);
        }

        printf("\n\n thanks for using our service....");

        getch();
        return 0;
}
