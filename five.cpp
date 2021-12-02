

#include<stdio.h>


int main()
{

int arr [12];
int positive = 0, negative = 0;

for(int i= 1; i<=10; i++)
  scanf("%d",& arr[i]);


for(int i=1; i<=10; i++)
{
   if(arr[i] < 0)
     positive++;

    else
    negative++;

}

printf("Positive count is : %d\n",positive);
printf("negative count is : %d\n",negative);


}

