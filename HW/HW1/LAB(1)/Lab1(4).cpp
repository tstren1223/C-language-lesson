#include <stdio.h> 
 
int main() {   
// Part (A)   
	int a1 = 10;   
	int a2,a3,a4,a5;
	double b2 = 1.1, c3 = 2.2;  
	float student_score = 100; 
  printf("Input:\n");
  scanf("%d",&a2);
  scanf("%d",&a3);
  scanf("%d %d",&a4,&a5); 
  printf("\n");   
  printf("1. %d %d %d %d\n",a1,a2,a3,a4,a5);
  printf("2. %lf\n",c3+2);
  printf("3. %d\n",a1+10);
  printf("4. %f\n",student_score);
  printf("5. %lf\n",a1+b2);
  // Part (B)   
  int m;
  printf("Input Money: ");
  scanf("%d", &m);
  printf("Output:\n50: %d\n10: %d\n5: %d\n1: %d\n",m/50,m%50/10,m%10/5,m%5);  // complete this line 
 
  return 0; 
  }
