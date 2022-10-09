#include<stdio.h>
#include<conio.h>

int main()
{
    int c = 0,r = 0,cnt = 0;

    printf("\n\ Enter a Number");
    scanf("%d",&cnt);

    printf(" \n ");

    for(r =1;r <= cnt;r ++)
    {
        for(c =1;c <= cnt;c ++)
        {
            if(r == 1 || c == (cnt + 1) / 2)
            {
                printf(" * ");
            }
            else
            {
                printf("    ");
            }
        }
        printf(" \n ");
    }
    getch();
    return 0;
}
