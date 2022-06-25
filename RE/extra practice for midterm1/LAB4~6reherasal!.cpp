#include <stdio.h>
#include <limits.h>
int main(){
{
	int kk=1;
	
	
	while(kk){
		printf("\nHere is lab4 for rehearsal\n1. is about usage for while!\n2. is about coupon and chocolate!\n3. is about max or min of a set of numbers\n4. is about log.\n5. is a seires of triangle!\n6.exist and go to lab5\n");
		printf("You want to look for?\n");
		int cho;
		scanf("%d",&cho);
		switch(cho){
	
			case 1:
				//該題型往往需要寫出來找規律 
				double s;
				s=0;
				int i,sign;
				i=1,sign=1;
				while(1./i>=1e-6){
					s+=1./i*sign;
					i+=2;
					sign*=-1;
				}//規律:每次的分母為前次+2 
				printf("A.Write a program to approximate the value of π/4 using the formula: π/4  = 1 - 1/3 + 1/5 - 1/7 + 1/9 - … Stop when the added or subtracted term is less than 10 6 ? (1E-06). \n");
				printf("npi/4 = %lf\n",s);
				s=0;
				int f1,f2,f3,sum;
				f1=1,f2=1,f3=0,sum=2;
				while(sum<1000){
					f3=f1+f2;
					f2=f1;
					f1=f3;
					sum+=f3;
				}
				printf("B.Write the program to print the following sequence of numbers and stop when the sum of the terms exceeds 1000!\n");
				printf("sum=%d\n",sum);
				printf("C.Write a program to approximate the value of e using the formula: e = 1 + 1/1! + 1/2!  + 1/3!+… (a). Stop when the added term is less than 10 6 ? . (b). Stop when the difference between the two successive terms is less than 0.001. Use one while loop to complete this problem. \n");
				long long n1,i1;
				n1=1,i1=1;
				double e;
				e=1;
				while(1./n1>1e-6)
				{
					e+=1./n1;
					i1++;
					n1*=i1;
				}
				printf("--------------------(a)--------------------\nwhen/n!<1E-06,e=%.12lf\n",e);
	
				n1=1;
				i1=1;
				e=1;
				double x3,y;
				x3=1,y=2;
				while(y-x3>1e-03)
				{
					e+=x3;
					i1++;
					n1*=i1;
					y=x3;
					x3=1./n1;
				}
				printf("--------------------(b)--------------------\nwhen the difference between the formal and latter is <0.001,e=%.12lf\n",e);
				printf("\nD.Write a program to approximate the value of sin(x) using the formula: sin(X) =x-x^3/3!+x^5/5!-x^7/7!+....+(-1)^(n+1)*x^(2n-1)/(2n-1)! The program stop when x^(2n-1)/(2n-1)!<1e-8. Use one while loop to complete this problem.\nPlease input x: ");
				int n3;
				n3=1;
				sign=1;
				double x4,a2;
				a2=0;
				printf("x= ");
				scanf("%lf",&x3);
				x4=x3;
				while((x4<0)?-x4>1e-08:x4>1e-08)
				{
					a2+=x4*sign;
					n3++;
					sign=-sign;
					x4=x4*x3*x3/(2*n3-2)/(2*n3-1);
				}
	
				printf("sin(%.2lf)=%.10lf\n",x3,a2);
	
				break;
				
			case 2:
				int m,l,s1;
				s1=0;
				printf("Suppose you can buy a chocolate bar from the vending machine for $1 each. Inside every chocolate bar is a coupon. You can redeem seven coupons for one chocolate bar from the machine. You would like to know how many chocolate bars you can eat, including those redeem via coupon, if you have n dollars. \n");
				printf("\nHow manny dollars do you have?");
				scanf("%d",&m);
				s1=m;
				l=m;
				while(l>=7){
					s1+=l/7;
					l=l%7+l/7;//先處理第一次轉換再把處理完的結果丟進來看能再弄幾次! 
				}
				printf("\nyou can buy %d bars\n%d coupons remains\n",s1,l);
				break;
	
			case 3:
				int x,sum1,max;
				x=1;
				sum1=0,max=0;
				printf("A.the max sum in sucessive numbers!\nPlease input a set of numbers:(stop when x=0)");
				while (x!=0){
					scanf("%d",&x);
					sum1+=x;
					sum1<=0?sum1=0:sum1>=max?max=sum1:NULL;	//連續的重點在於一值相加直到為0,如果不連續相加可能會有判斷錯誤的機會!!! 
				}
				printf("maximum sum of consecutive is :%d\n",max);
				printf("B.the max number in a set of numbers!\nPlease input numbers:");
				long long num,tem;
				tem=LONG_MIN;//設一個門檻 
				while(scanf("%lld",&num)!=EOF){
					num>tem?tem=num:NULL;
				};
				
				printf("The max number in this set is %lld\n",tem);
				printf("C.the min number in a set of numbers!\nPlease input numbers:");
				tem=LONG_MAX;
				while(scanf("%lld",&num)!=EOF){
					num<tem?tem=num:NULL;
				};
				
				printf("The min number in this set is %lld\n",tem);
				printf("D.The three max number in a set of numbers!\nPlease input numbers:");
				i=0;//處理前三項的部分 
				int a,b,c,d;
	
				while(scanf("%d",&x)){
					i++;
					if(i==1)
						a=x;
					else if(i==2)
						b=x;
					else if(i==3)
						c=x;
					else{
						if(a<b){
							if(b<c){
								d=a;
								a=c;
								c=d;
							}
							else{
								d=a;
								a=b;
								b=d;
							}
						}
						if(c>b){
							if(c>a){
								d=a;
								a=c;
								c=b;
								b=d;
							}
							else{
								d=b;
								b=c;
								c=d;
							}
						}
						//排出順序a>b>c!每次都排順序,如此便能只考慮c! 
						if(x>c)
							c=x;
					}
				}
				printf("The max three number:%lld %lld %lld",a,b,c);
				printf("E.The min three numbers in a set of numbers.\nPlease input numbers!\n");
				while(scanf("%d",&x)){
					i++;
					if(i==1)
						a=x;
					else if(i==2)
						b=x;
					else if(i==3)
						c=x;
					else{
						if(a<b){
							if(b<c){
								d=a;
								a=c;
								c=d;
							}
							else{
								d=a;
								a=b;
								b=d;
							}
						}
						if(c>b){
							if(c>a){
								d=a;
								a=c;
								c=b;
								b=d;
							}
							else{
								d=b;
								b=c;
								c=d;
							}
						}
						//一樣排出a>b>c的順序 
						if(x<a)
							a=x;
					}
				}
				printf("The min three number:%lld %lld %lld",a,b,c);
				break;
				
			
			case 4:
				long long x1,n,x2;
				printf("Please input base x1 and number n:");
				i1=0;
				scanf("%lld %lld",&x1,&n);
				x2=x1;
				while(x2<n){
					x2*=x1;
					i1++;
				}
				
				printf("log%.0lld(%.0lld) = %.0lld\n",x1,n,i1);
				break;
			case 5:
				printf("A. n rows of Leibniz triangle, where n is read from the keyboard.(using C)\nPlease input n: ");
				scanf("%lld",&n);
				for(double i=1,b=1,c=1;i<=n;i++,b=1,c=1){
					for(int j=3*(n-i);j>0;j--){
						printf(" ");
					}//一樣分成三部分for space for1跟-還有for規律! 
				for(int k=1;k<=i;k++)
				printf("1      ");
				printf("\n");
				for(int j=3*(n-i);j>0;j--){
						printf(" ");
					}
				for(int k=1;k<=i;k++)
				printf("-      ");
				printf("\n");
				for(int j=3*(n-i);j>0;j--){
						printf(" ");
					}
				printf("%-7.0lf",i);
				for(int j=1,k=i-1;j<i;j++,k--){
					b*=k;
					c*=j;
					printf("%-7.0lf",i*b/c);
				}//找出規律!! 
				printf("\n");	
				}
				printf("B.the first n rows of Pascal’s triangle. \nPlease input n:");
				scanf("%d",&n);
				for(int i=0,b=1,c=1;i<n;i++,b=1,c=1){
					for(int j=2*(n-i);j>0;j--){
						printf(" ");//分成空格還有1跟規律部分! 
					}
				printf("1   ");
				for(int j=1,k=i;j<=i;j++,k--){
					b*=k;
					c*=j;
					printf("%-4d",b/c);
				}
				printf("\n");	
				}
				printf("C.the normal triangle with*.\nPlease input n:");//一般的triangle主要分成兩部分! space and body----->because * is growing bigger 不像diamond有對稱!!!
				scanf("%lld",&n);
				int con;
				for(int i=1;i<=n;i++){//分直橫
				con=n-i; 
					for(int j=1;j<=con;j++)
						printf(" ");
					for(int j=1;j<=2*(i-1)+1;j++)
						printf("*");
					printf("\n");
				}//for合併在這裡效益不大!!------->con變化沒回折故純粹這樣打即可 
				break;
			case 6:
				kk=0;
				break;
			default:
				printf("You input a wrong number!\n");
			}
	}
}
{
	int kk=1;
	
	
	while(kk){
		printf("\nHere is lab5 for rehearsal\n1. is about ceyptarithmatic puzzles!\n2. is about two digits palindron!\n3. is about twin prime numbers!\n4.exist and go to lab6\n");
		printf("You want to look for?\n");
		int cho;
		scanf("%d",&cho);
		switch(cho){
	
			case 1:
				printf("In cryptarithmetic puzzles, mathematical equations are written using letters.Each letter can be a digit from 0 to 9, but no two letters can be the same.Write a program that finds solutions to the cryptarithmetic puzzle of: TOO + TOO + TOO + TOO = GOOD \n");
				for(int t=0;t<=9;t++)
					for(int o=0;o<=9;o++)
						for(int g=0;g<=9;g++)
							for(int d=0;d<=9;d++){
					
								(4*(t*100+10*o+o)==g*1000+100*o+10*o+d)&&t!=o&&t!=g&&t!=d&&o!=g&&o!=d&&g!=d?printf("\nT=%d\nO=%d\nG=%d\nD=%d\n",t,o,g,d):NULL;//注意條件 
				}
				break;
				
			case 2:
				printf("A.A two-digit palindrome is said to be a palindrome if reverse with twodigit of the even-digit number is the same as that number.");
				unsigned long long int n,x1,sum;
				sum=0;
				unsigned long long int l,b,d;
	
				printf("\nInput n = ");
				while(scanf("%lld",&n)!=EOF){
					sum=0;
					x1=n;
					while(x1){
						l=x1%100;
						sum=sum*100+l;//處理一組時創造另一組!!! 
						x1/=100;
					}
					printf((sum==n)?"Two-Digit Palindrom\n":"Not Two-Digit Palindrom\n");
					printf("Input n = ");
				}
				printf("B.Two-digit Palindrome A two-digit palindrome is said to be a palindrome if reverse with twodigit of the even-digit number is the same as that number.\n");
				int x,x2,x3,x4;
				x2=0,x4=0;
				int l1,b1;
				b1=1;
	
	
				while(scanf(" %d",&x)){
				x2=0;
				x4=0;
				printf("Biniary Number: %d\n",x);
				sum=0;
				b1=1;
				x1=x;
				while(x1){
					l1=x1%10;
					x2=x2*10+l1;
					sum+=l*b1;
					b1*=2;
					x1/=10;
				}//處理時創造decimal及相反數 
	
				printf("Decimal Number: %lld\n",sum);
				x3=sum;
				while(x3){
					l1=x3%10;
					x4=x4*10+l1;
					x3/=10;//創造decimal的相反 
				}
				printf((x2==x)?"Biniary: palindromic\n":"Biniary: not palindromic\n");
				printf((x4==sum)?"Decimal: palindromic\n":"Decimal: not palindromic\n\n");
				break;
			case 3:
				printf("A.Twin prime numbers is n and n+2 and both are prime numbers!Let's find the max set!'\nPlease input range of number!(0 to x)\n");
				long long x;
				long long i,a,b,con;
				con=1;
				while(scanf("%lld",&x)!=EOF){
					i=x;
					con=1;
					while(con&&i>=0){
						con=1;
						for(long long k=2;k*k<=i;k++){//最簡寫法! 
							if(i%k==0)
								con+=1;
							if(con>1){//這樣寫的話質數必須不能有+1!! 
								break;
							}
						}
						if(con==1){
							for(long long k=2;k*k<=i-2;k++){
								if((i-2)%k==0)
									con+=1;
								if(con>1){
									break;
								}
							}
							if(con==1){
									a=i,b=i-2;
									con=0;
								}
							else
								con=1;
						
						}
						i--;
						
					}
							
						
					printf("twin prime max numbers:%lld %lld\n",a,b);
					}
				
				printf("B.sexy prime numbers is n and n+6 and both are prime numbers!Let's find the max set!'\nPlease input range of number!(0 to x)");
				long long x5;
				int k;
				i=1;
				b=0;
				d=0;
				k=1;
				while(scanf("%lld",&x5)!=EOF){
					a=0;
					b=0;
					i=x5;
					k=1;
					while(k){//以k為控制者 
						con=0;//con算因數! 
			
						for(long long k=2;k<=i/2;k++){//蔡媽講義的寫法 
							if(i%k==0){
								con++;
								break;
							}
						}
						
						if(con==0){
							for(long long k=2;k<=(i-6)/2;k++){
								if((i-6)%k==0)
									con+=1;
								if(con==1)
									break;
							}
							if(con==0){
								b=i;
								d=i-6;
								k=0;
							}	
						}
						i--;
		}
		printf("max numbers:%lld %lld\n",b,d);
	}
				break;
			case 4:
				kk=0;
				break;
			default:
				printf("You input a wrong number!\n");
			}
		}
	}
}
{
	int kk=1;
	
	
	while(kk){
		printf("\nHere is the last lab6 for rehearsal\n1. is about LCM and GCD!\n2. is about usage for switch!\n3.exist and go to for the text^^!\n");
		printf("You want to look for?\n");
		int cho;
		scanf("%d",&cho);
		switch(cho){
	
			case 1:
				printf("A.LCM for three numbers,Please input three numbers:");
				//LCM的次數為n-1次! 
				long long n1,n2,n3,temp1,temp2,gcd,lcm;
				while(scanf("%lld %lld %lld",&n1,&n2,&n3)!=EOF){
					temp1=n1,temp2=n2;
					while((temp1%=temp2)&&(temp2%=temp1));//for gcd 輾轉相除法! 
					gcd=temp1+temp2;//one of these numbers will be 0
					lcm=n1*n2/gcd;//a way to get lcm between two numbers
					temp1=lcm,temp2=n3;
					while((temp1%=temp2)&&(temp2%=temp1));//for another gcd
					gcd=temp1+temp2;//one is 0
					lcm=lcm*n3/gcd;//lud for three is lcd for lcd of two and another number 
					printf("LCM = %lld\n",lcm);
				}
				printf("B.GCD for three numbers,Please input three numbers:");
				//輾轉相減法! 
				long long a,b,c,d;
				while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
					while(a!=b){
						while(a>b)
							a-=b;
						while(b>a)
							b-=a;
					}
					while(b!=c){
						while(b>c)
							b-=c;
						while(b<c)
							c-=b;
					}
					printf("GCD is %lld\n",b);
				}
				break;
				
			case 2:
				printf("A.for score:\n");
				int x,a1,b1,c1,d1;
				a1=0,b1=0,c1=0,d1=0;
				char con;
				do{	
					printf("Please input a set of number!\n");
					scanf(" %d",&x);
					if(x<0||x>100){
					printf("continue(y/n)?");
					scanf(" %c",&con);
					continue;
					}
					else{
					switch(x/=10){
						case 8 ... 10://如果是一連串的數可這樣寫! 由小寫到大!! 
							a1++;
							break;
						case 7:
							b1++;
							break;
						case 6:
							c1++;
							break;
						default:
							d1++;
					}
					printf("continue(y/n)?\n");
					scanf(" %c",&con);
					}
				}while(con!='N'&&con!='n');
				printf("rank => A:%d B:%d C:%d D:%d\n",a1,b1,c1,d1);
				printf("B.for calculator!\n");
				char YN,ope;
				do{
					printf("Please input integer, the operator and integer:\n");
					scanf("%d %c %d",&a1,&ope,&b1);
				  	switch(ope){
  						case'+':
							printf("The result: %d + %d = %d\n",a1,b1,a1+b1);
							break;
		
						case'-':
							printf("The result: %d - %d = %d\n",a1,b1,a1-b1);
							break;
		
						case'*':
							printf("The result: %d * %d = %d\n",a1,b1,a1*b1);
							break;
		  
						case'/':
							if(b1==0){
								printf("The denominator can't be zero\n");
								break;
						}
							printf("The result: %d / %d = %lf\n",a1,b1,(double)a1/b1);
							break;
						default:
							printf("Error: incorrect operator!!!\n");
							break;
	  				}
	  			printf("Continue or not :");
	  			scanf(" %c",&YN);
			}while(YN!='N'&&YN!='n');
			break;
			case 3:
				kk=0;
				break;
				printf("Good Luck For You!\n");
			default:
				printf("You input a wrong number!\n");
			}
	}
}
	return 0;
}
