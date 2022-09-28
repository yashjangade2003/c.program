#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a character to get ASCII value == ");
    scanf("%c",&ch);                      /// ch = getche()

    printf("\m\n ASCII value for |%c| character is |%d|.", ch, ch);

    getch();
    return 0;
}
