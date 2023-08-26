#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=7;i++)
  {
    for(j=0;j<=5;j++)
    {
      if(i<=1 && j==3-i)
        printf("*");
      else if(i==2 && (j==1 || j==4))
        printf("*");
      else if(i==3 && j<=5)
        printf("*");
      else if(i>=4 && j==4)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}





