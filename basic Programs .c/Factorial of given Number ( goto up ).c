#include<stdio.h>
#include<conio.h>
 int main()
  {
      int No = 0, Fact = 0, Temp = 0;
      up:
        printf("\n\t Enter A positive Integer number => ");
        Scanf("%d",&No);

        if(No<=0)
        {
            printf("\n only positive value is required\n");
            goto up;
        }
        Fact = 1;

        Temp=No;

        while(Temp> 0)
        {
            Fact = Fact * Temp;

            Temp--;
        }
        printf("\n\t Factorial of Given Number %d = %d ", Temp,Fact);
        getch();
        return 0;
  }
