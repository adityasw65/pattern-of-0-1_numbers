#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=4;j++)
    {
      if((i==0 || i==2) && j<=4)
        printf("*");
      else if((i==1 && j==3) || (i==3 && j==1))
        printf("*");
      else if(i==4 && j==0)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




