#include<stdio.h>
void main()
{
  int i,j,k=0;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i==0 && j>=1 && j<=3)
        printf("*");
      else if(i>=1 && i<=2 && (j==0 || j==4))
        printf("*");
      else if(j==i-k && i>=3 && i<=5)
        printf("*");
      else if(i==6 && j<=4)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>=3)
      k=k+2;
  }
}





