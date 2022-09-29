#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,rc=0;

    printf("\n Enter size to print pattern=>");
    scanf("%d",rc);


    for(r=1;r<=4;r++)
    {
        for(c=1;c<=5;c++)
        {
            if(r==1 || c== r || c==rc)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

