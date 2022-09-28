#include<stdio.h>
#include<conio.h>

int main()
{

    int i=0,no=0;
    printf("\n enter a any number");
    scanf("%d",&no);



        for(i=2;i<no;i++)
        {
            if(no%i==0)
            {
                break;
            }

        if(i==no)
            {
                printf("\n prime no");
            }
        else
            {
                printf("\n not a prime no");
            }
        }

    getch();
    return 0;


}
