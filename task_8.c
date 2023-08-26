#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=4;j++)
    {
      if((i==0 || i==3 || i==6) && j>=1 && j<=3)
        printf("*");
      else if((i!=0 && i!=3 && i!=6) && (j==0 || j==4))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




