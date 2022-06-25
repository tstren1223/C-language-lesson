#include<stdio.h>
int main()
{
double r, t;
const float pi=3.14159;
r = 7.25, t = 4./3;
printf("r=%lf\nt=%lf\npi=%f\n\n", r, t, pi);
printf("123456789012345678901234567890123456789012345678901234567890\n"); 
printf("%10.5lf = %-12.2lf + %016.10lf + %010.5lf\n",pi,pi,(int)(pi*100000)/10%100*0.0001,(int)(pi*100000)%10*0.00001);
printf("%-10.7lf * %012.7lf * (%012.4lf)^3 = %13.7lf\n", t, pi,r, t*pi*r*r*r); //Volume of ball
printf("%-10d * %12.4lf * (%-12.3lf)^2 = %011.4lf\n", 4, pi, r, 4*pi*r*r); //Area of ball
printf("%010.6lf * %12.10lf = %016.7lf\n", r, t, r*t);
return 0;
}
