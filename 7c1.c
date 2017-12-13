#include<stdio.h>
int main()
{
char line[200];
char array[25];
FILE *ptr,*ptr2;

printf("\n Enter the name of the file \n");
fgets(array,25,stdin);

if ((ptr=fopen("capitals.txt","r"))==NULL)
    {printf("Error in opening file"); return 0;}
int i=0;
while(array[i]!='\0')
{
  i++;
}
array[i]='.';
array[i+1]='t';
array[i+2]='x';
array[i+3]='t';
array[i+4]='\0';
ptr2=fopen(array,"w");
while (!feof(ptr))
{
    fgets(line,200,ptr);    // Reads 200 char of till \n
    fputs(line,ptr2);
}

fclose(ptr2);
fclose(ptr);
printf("\n");
}
