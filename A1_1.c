#include<stdio.h>
int fn(int,int,int);
int nod(int,int);
int ly(int);
void main()
{
 int dy=-1,mn=-1,yr=-1,d=-1;
 printf("Enter the date in the dd/mm/yyyy format:");
 scanf("%d/%d/%d",&dy,&mn,&yr); //inputs
 d=fn(dy,mn,yr);
 switch(d)
  {
   case 1: {
             printf("Monday\n");
             break;
           }
   case 2: {
            printf("Tuesday\n");
            break;
           }
   case 3: {
            printf("Wednesday\n");           //using switch to print days
            break;
           }
   case 4: {
            printf("Thursday\n");
            break;
           }
   case 5: {
            printf("Friday\n");
            break;
           }
   case 6: {
            printf("Saturday\n");
            break;
           }
   case 0: {
            printf("Sunday\n");
            break;
           }
   default : printf("Please enter valid date\n");        //error message
  }
}
int fn(int dy,int mn,int yr)
{
 int d=-1,t=0,p=0;
 if(yr>0&&(mn>=0&&mn<=12))                            //logic
  {
   if(dy>0&&dy<=nod(mn,yr))
    {
     t=yr+(yr-1)/4;
     t=t-(yr-1)/100;                                  //counting no of days till the previous year and modulo 7
     t=t+(yr-1)/400;
     t=t%7;
     for(int i=1;i<mn;i=i+1)
      {
       p=p+nod(i,yr);
      }
     p=p+dy;
     d=p%7+t+6;                                      //counting no of days in current year modulo 7 and adding to previous tally
     d=d%7;
    }
  }
 return(d);
}
int nod(int a,int b)                                //program to count no of days in a month
{
 switch (a)
  {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: return 31;
   case 2: {
            if(ly(b))
                return 29;
            else
                return 28;
           }
   default : return 30;
  }
}
int ly(int b)                                    //program to check leap year
{
 if(b%4==0&&(b%100!=0||b%400==0))
        return 1;
 else
        return 0;
}
