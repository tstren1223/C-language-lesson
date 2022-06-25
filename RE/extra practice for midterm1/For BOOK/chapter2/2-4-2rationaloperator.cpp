#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int i=10,j=5;
	printf("%d > %d is %d\n",i,j,i>j);
	printf("%d < %d is %d\n",i,j,i<j);
	printf("%d >= %d is %d\n",i,j,i>=j);
	printf("%d <= %d is %d\n",i,j,i<=j);
	printf("%d == %d is %d\n",i,j,i==j);
	printf("%d != %d is %d\n\n",i,j,i!=j);
	
	float x=0.1;
	double y=0.1;
	
	printf("x = %10.7f\n",x);
	printf("0.1 * 0.1 = %20.15lf\n",0.1*0.1);	//%lf
	printf("x * x = %12.10f\n",x*x);
	printf("x *x *x = %18.10f\n",x*x*x);
	printf("y * y = %18.15lf\n",y*y);	//%lf
	printf("y *y *y = %23.20lf\n\n",y*y*y);		//%lf
	printf("x == y is %d\n",x==y);
	printf("x == 0.1 is %d\n",x==0.1);
	printf("y == 0.1 is %d\n",y==0.1);
	printf("fabs(x - 0.1) < 1e-06 :%d\n\n",fabs(x-0.1)<1e-06);
	
	
	cout<<fixed<<setprecision(15);
	cout<<"0.1 * 0.1 ="<<0.1*0.1<<endl;
	cout<<"x * x ="<<x*x<<endl;
	cout<<"y * y ="<<y*y<<endl;
	return 0;
}
