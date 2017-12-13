#include<stdio.h>
int main()
{
    char line[200];
    char array[25];
    FILE *ptr;

    printf("\n *** Program to find the capital of a specific country *** \n");

    if ((ptr=fopen("capitals.txt","r"))==NULL)
        {
        printf("Error in opening file");
        return 0;
        }
    printf("Enter the country name starting with capital:");
    fgets(array,25,stdin);
    while (!feof(ptr))
    {
        fgets(line,200,ptr);    // Reads 200 char of till \n
        //puts(line);
        int i=0,c=0;
        while(line[i]!=',')
        {
          if(array[i]==line[i])
          c++;
          i++;

        }
        if(line[c]==',')
        {
          puts(line+c+1);
          break;
        }
    }
    fclose(ptr);
    printf("\n");

return 0;
}
