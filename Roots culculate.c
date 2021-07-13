#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*A program to culculate roots with Bhaskara’s formula from the given three floating numbers.*/
double x1,x2,a,b,c,delta;
int main()
{
//requst to input a,b,c
printf("please give number(a)\n");
scanf("%lf",&a);
printf("please give number(b)\n");
scanf("%lf",&b);
printf("please give number(c)\n");
scanf("%lf",&c);
//culculate the delta inside the sqrt
delta= (b*b)-(4*c*a);
//if the delta is positive, there are roots
if(delta >= 0)
{
//root1, +
x1 = (-b+sqrt(delta))/2*a;
printf("ROOT1 = %lf\n",x1);

//root2, -
x2 = (-b-sqrt(delta))/2*a;
printf("ROOT2 = %lf\n",x2);
}else
printf("There is no roots\n");
return 0;
}
