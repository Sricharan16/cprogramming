#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double evaluatePolynomial(double a[],double x,int n)
{
  double result=0;
  for(int i=0;i<n+1;i++)
   {
   result=a[i]*pow(x,i)+result; //finding the value of the polynomial
   }
  return result;
}

double derivative(double a[],double x,int n)
{
 double result=0;
 for(int i=1;i<n+1;i++)
  {
   result=a[i]*pow(x,i-1)*i+result;   //for finding the derivative of the polynomial
  }
  return result;
}
double root(double a[],double x,int n)   //calculating roots using newton raphson method
{
  double  x0,error,x1;
  long int p;
  x0=rand()%1000;
  error=0.001;
  p=10000;
    if(evaluatePolynomial(a,x0,n)==0)
		  printf("The root is %lf\n",x0);
	  else
		{
		  for(int i=0;i<p;i++)
			   {
        	x1=x0-evaluatePolynomial(a,x0,n)/derivative(a,x0,n); //if generated is not the actual root
        	if(fabs(x0-x1)<error)
					 {
        		printf("The root is %.2lf\n",x1);
        	  return 0;
           }
        	else
        		x0=x1;

    	   }
	   printf("The required solution does not converge \n");
	  }
}
int main()
 {
    double x;
    int n;
    printf("Enter value of n(order):");
    scanf("%d",&n);                      //input
    double a[n+1];
    for(int i=0;i<n+1;i++)
	{
		printf("Coeffient a%d :",i);
		scanf("%lf",&a[i]);
	}
	printf("Enter value of x(variable):");
	scanf("%lf",&x);
	double value=evaluatePolynomial(a,x,n);
	printf("The value of Polynomial is %lf\n",value);
	root(a,x,n);
 return 0;
}
