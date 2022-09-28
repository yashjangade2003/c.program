#include<stdio.h>
#include<conio.h>

int main()

{
     int num;

     printf("Enter the number");
     scanf("%d",&num);

     if((num %5 == 0)&&(num %7 == 0))
     {
            printf("number divisible by 5 & 7");
     }
     else if(num %5 == 0)
     {
            printf("Number divisible by 5");
     }
     else if(num %7 == 0)
     {
            printf("number divisible by 7");
     }
     else
     {
            printf("number is not divisible by 5 & 7");
     }

     getch();
     return 0;
}
