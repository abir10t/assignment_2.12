
#include<stdio.h>

int blc, dw;

void deposite(int a, int b)
{
    blc = blc+a;

    printf("%d\n",blc);

}
void withdraw(int a , int b)
{
     blc = blc - b;

    printf("%d\n",blc);
}

int main()
{


    scanf("%d %d",&blc, &dw);

    deposite(5,5);
    withdraw(5,5);




}
