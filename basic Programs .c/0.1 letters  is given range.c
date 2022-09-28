#include<stdio.h>
#include<conio.h>

int main()
{
        char S_ch = '\0', E_ch = '\0';

        printf("\n Enter start Letter =");
        S_ch = getche();

        printf("\n Enter End Letter =");
        E_ch = getche();

        if(S_ch < E_ch)
        {
                while(S_ch <= E_ch)
                {
                    printf("\n %c", S_ch);
                    S_ch++;
                }
        }
        else
        {
                while(S_ch >= E_ch)
                {
                    printf("\n %c ", S_ch);
                    S_ch--;
                }
        }

        _getch();
        return 0;
}
