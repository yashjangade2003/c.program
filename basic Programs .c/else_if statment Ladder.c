#include<stdio.h>
#include<conio.h>

    int main()
{
        float Amount = 0.0;
        printf(" Enter your Amount balance =");
        scanf("%f",&Amount);

        if(Amount>10000)
        {
                printf("\n\n\t WELCOME to the mall");
                printf("\n\n You are prime coustmer");
                printf("\n\t Go to counter NO7 for prime of number");
        }

        else if(Amount>=7000)
        {
                printf("\n\n\t WELCOME tO mall!!!!\n");
                printf("\n\t You can enjoy all shops\n");
        }

        else if(Amount>1000)
        {
                printf("\n\n\t WELCOME to mall!!!!\n");
                printf("\n\t You can enjoy all shops\n");
        }
                printf("\n\n Thanks for visit !!!!");

            getch();
            return 0;
}
