#include<stdio.h>
int main()
{
    double unit,vat,TotalAmount=0;
    printf("Enter your Unit of this month :");
    scanf("%lf",&unit);
    if(unit >=1 && unit<=100)
    {
        unit=unit*5;
        vat=unit*0.15;
        TotalAmount=unit+vat;
        printf("Enter your Amount : %lf",TotalAmount);

    }
        else if(unit >=101 && unit<=500)
        {
            unit=unit*10;
            vat=unit*0.15;
            TotalAmount=unit+vat;
            printf("Enter your Amount : %lf",TotalAmount);

        }
        else if(unit>=501)
        {
            unit=unit*15;
            vat=unit*0.15;
            TotalAmount=unit+vat;
            printf("Enter your Amount : %lf",TotalAmount);

        }
}
