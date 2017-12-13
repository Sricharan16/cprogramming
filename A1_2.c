#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 int main()
  {
	  char A[50],ch;
	  int C[5]={0,0,0,0,0};
		int c;
	printf("enter a string for which u want to print the histogram\n");
	int i = 0;
	while(ch != '\n')
	{
		    ch = getchar();
		    A[i] = ch;
		    i++;
	}
	A[i] = '\0';
	c=strlen(A);

	for(int i=0;i<c;i++)      //counting the vowels 
	  {
		if(A[i]=='a'||A[i]=='A')
			C[0]++;
		else if(A[i]=='e'||A[i]=='E')
			C[1]++;
		else if(A[i]=='i'||A[i]=='I')
			C[2]++;
		else if(A[i]=='o'||A[i]=='O')
			C[3]++;
		else if(A[i]=='u'||A[i]=='U')
			C[4]++;

	 }

	A[0]=C[0];  A[1]=C[1];  A[2]=C[2];  A[3]=C[3];  A[4]=C[4];
	int s=A[0];
	for(int i=0;i<5;i++) //finding the maximum value
	 {
	  if(A[i]>s)
		 s=A[i];
	 }
	printf("HISTOGRAM:\n");
	 for(int i=s;i>=0;i--)    //printing the histogram
		{
		if((C[0]-i)>0)
		 printf("* ");
		  else
		    printf(" ");
		if((C[1]-i)>0)
		 printf("* ");
		  else
		    printf(" ");
		if((C[2]-i)>0)
		 printf("* ");
		  else
		    printf(" ");
		if((C[3]-i)>0)
		 printf("* ");
		  else
		    printf(" ");
		if((C[4]-i)>0)
		 printf("* ");
		  else
		    printf(" ");
  printf("\n");
	   }
	printf("a e i o u\n");
	return 0;
  }
