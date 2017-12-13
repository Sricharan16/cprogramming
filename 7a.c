#include<stdio.h>
int main()
{
{
    char line[200];
    FILE *ptr,*ptr2;

    printf("\n *** Program to read, print and copy a text file *** \n");

    if ((ptr=fopen("capitals.txt","r"))==NULL)
        {
        printf("Error in opening file");
        return 0;
        }
    ptr2=fopen("new.txt","w");
    while (!feof(ptr))
    {
        fgets(line,200,ptr);    // Reads 200 char of till \n
        puts(line);
        fputs(line,ptr2);
    }

    fclose(ptr2);
    fclose(ptr);
    printf("\n");
}
{
    char RGB[4];
    char header[55];
    FILE *ptr,*ptr2;

    printf("\n *** Program to read and copy an image file *** \n");

    if ((ptr=fopen("santa.bmp","rb"))==NULL)
        {printf("Error in opening file"); return 0;}
    ptr2=fopen("new.bmp","wb");

    fread(header,54,1,ptr);
    fwrite(header,54,1,ptr2);

    while (!feof(ptr))
    {
        if (fread(RGB,3,1,ptr)==0) break;
        fwrite(RGB,3,1,ptr2);
    }

    printf("\n File copied succesfully! \n");

    fclose(ptr2);
    fclose(ptr);
    printf("\n");
}
return 0;
}
