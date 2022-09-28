#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n Enter a character = ");
        ch = getche();

        if((ch == 'A') || (ch == 'a') || (ch == 'W'))
        {
            printf("\n Welcome");
        }
        else if((ch == 'B') || (ch == 'b') || (ch == 'E'))
        {
            printf("\n Hand");
        }
        else if((ch == 'c') || (ch == 'c'))
        {
            printf("\n Good day");
        }
        else if((ch == 'D') || (ch == 'd'))
        {
            printf("\n God bye");
        }
        else
        {
            printf("\n Invalid");
        }

        getch();
        return 0;
}
