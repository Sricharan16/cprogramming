#include<stdio.h>
#include<stdlib.h>
int main()
{ int i, j;
  int A[4][4];

  for (int i=0;i<4 ; i++)
  {
    for(int j=0;j<4;j++)
    { scanf("%d",&A[i][j]);

    }
  }

    for (int i=0;i<4 ; i++)
    {
      for(int j=0;j<4;j++)
      { if(A[i][j]!=32)
        printf("%d  ",A[i][j]);
        else
        printf("   ");      }
      printf("\n\n");
    }
    return 0;
}
