#include<stdio.h>
#include "colorCodes.c"

main()
{
    system.out("clear");
	printf(ANSI_RED);
	printf("This is red.");
	printf(ANSI_CLEAR);
	printf(" But not this. \n");
	printf(ANSI_BLUE "This is Blue. \n" ANSI_CLEAR);
}
