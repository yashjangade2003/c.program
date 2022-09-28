#include<stdio.h>
#include<conio.h>

int main()

{
        int Day=0;

        printf("\n Enter no of week(1-7)=");
        scanf("%d",&Day);

        switch(Day)
        {
                case 1:
                    printf("\n\n\t Monday");
                    break;
                case 2:
                    printf("\n\n\t Tuesday");
                    break;
                case 3:
                    printf("\n\n\t Thrysday");
                    break;
                case 4:
                    printf("\n\n\t Wednesday");
                    break;
                case 5:
                    printf("\n\n\t Friday");
                case 6:
                    printf("\n\n\t Saturday");
                    printf("\n\n\t JAY HANUMAN");
                case 7:
                    printf("\n\n\t Sunday");
                    printf("\n\n\t holiday");
                    break;
                    default:
                    printf("\n In valid Input");

        }

         getch();
         return 0;
}
