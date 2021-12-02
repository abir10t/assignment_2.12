
#include<stdio.h>


int main()
{


int a[10][10];

for(int i=0; i<3; i++)
{

 for(int j= 0; j<3; j++)

  scanf("%d",&a[i][j]);

}

for(int i=0; i<3; i++)
{

 for(int j= 0; j<3; j++)

   if( a[i][j] %3 ==0 )

  printf("%d ",a[i][j]);

}





}
