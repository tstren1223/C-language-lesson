#include <stdio.h>
#include <stdlib.h> 
int main(){
{
	int kk=1;
	
	
	while(kk){
		printf("\nHere is lab1 for rehearsal\n1. is about conversion for units!\n2. is about conversion in binary and decimal\n3. is about Fibonacci number\n4.exist and go to lab2\n");
		printf("You want to look for?\n");
		int cho;
		scanf("%d",&cho);
		switch(cho){
	
	//連續的換算問題
			case 1:
				long long x;
				printf("\nA.Please enter seconeds!\n");
				scanf("%lld",&x);
				printf("%lld hours,%lld mintes,%lld seconds\n",x/3600,x%3600/60,x%60);
				printf("B.Please enter femtometre!\n");
				scanf("%lld",&x);
				printf("%lld meter,%lld cm,%ldd mm,%lld um,%lld pm,%lld fm\n",x/(long long)1e15,(long long)(x%(long long)(1e15)/1e13),(long long)(x%(long long)(1e13)/1e12),(long long)(x%(long long)(1e12)/1e9),(long long)(x%(long long)(1e9)/1e3),(long long)(x%(long long)1e3));
				//此類問題可只用一個%及一個/來做兩次的換算得到!第一個%用來取得欲求位數進位前的值,再用/來換算成欲求值!!!
				break;
	
				//拆digits轉換及費式數列問題
			case 2:
				long long x1,x2,x3,x4,sum1,sum2,con;
				int digits;
				sum1=0,sum2=0,con=10,digits=0;
				printf("\nPlease input a number\n");
				scanf("%lld",&x1);
				x3=x1;//第一步:替代X1來進行多步驟 
				while(x3){
					digits++;
					x3/=2;
				}//先算出需要幾個digits 
				x3=x1;//重複使用 
				con=1;//從第一位開始往後加 
				for(int i=0;i<digits;i++){
					sum1+=x3%2*con;
					con*=10;
					x3/=2;
				} 
				printf("A.x1=%lld,in binary,x1=%lld,digits:%d\n",x1,sum1,digits);
				//亦可直接合併位數那邊!
				 sum1=0,x3=x1,con=1,digits=0;
				 while(x3){
				 	sum1+=x3%2*con;
					digits++;
					x3/=2;
					con*=10;
				}
				printf("B.x1=%lld,in binary,x1=%lld,digits:%d\n",x1,sum1,digits);
				printf("Please input a binary!\n");
				scanf("%lld",&x2);
				digits=0;
				x4=x2;//第一步一樣是用替代數來開場!
				while(x4){
					digits++;
					x4/=10;
				}//一樣先算幾個digits---->2轉10要/10*2的con而10轉2要/2*10的con
				x4=x2;
				con=1;
				for(int i=0;i<digits;i++){
					sum2+=x4%10*con;
					con*=2;
					x4/=10;
				}
				printf("C.x2=%lld,in decimal,x2=%lld,digits:%d\n",x2,sum2,digits);//Also,一樣可以合併成一個 
				digits=0;
				x4=x2;
				con=1;
				sum2=0;
				while(x4){
					digits++;
					sum2+=x4%10*con;
					con*=2;
					x4/=10;
				}
				printf("D.x2=%lld,in decimal,x2=%lld,digits:%d\n",x2,sum2,digits);
				//接著來試試digits相加 
				digits=0;
				x3=x1;
				//con=1;
				sum1=0;
				while(x3){
					sum1+=x3%10;//與轉換的差別只在不用*con 
					x3/=10;
					digits++;
				}
				printf("E.x1=%lld,sum=%lld,digits:%d\n",x1,sum1,digits);
				break;
	
			case 3:
				x1=1,x2=1,x3;
				int n;
				printf("Please input a number>=3:\n");
				scanf("%d",&n);
				printf("A.\nx1=%lld\nx2=%lld\n",x1,x2);//x3=x1+x2;x4=x2+x3=x1+x2+x2;x5=x3+x4=x1+x1+x2+x2+x2故A.計算X4時,x1=x3且由x3(4)=x1+x2,接著x2=x3,x3(5)=x1+x2 using三元 
				//B為先計算x3,x1=x2(2),x2=x3(3);x3(4)=x1+x2,然後x1=x2(3),x2=x3(4),接著x3(5)=x1+x2,再來x1=x2(4),x2=x3(5)
				for(int i=3;i<=n;i++){
					i%2==1?printf("x%d=%lld\n",i,x1+x2),x1=x1+x2:(printf("x%d=%lld\n",i,x1+x2),x2=x1+x2);
				}
				x1=1,x2=1,x3=1;//for規律,先初始化x3! 
				printf("B.\nx1=%lld\nx2=%lld\n",x1,x2);
				for(int i=3;i<=n;i++){
					x1=x2;
					x2=x3;
					x3=x1+x2;
					printf("x%d=%lld\n",i,x3);
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

{
	int kk=1;
	
	
	while(kk){
		
		printf("\nHere is lab2 for rehearsal\n1. is about the usage for constant and seperate numbers with commas!\n2. is about int with double in printf\n3. is about %(number.number)lf in printf also include number with 0 ahead!\n4. is about bits adder!\n5.exist and go to lab3\n");
		
		printf("You want to look for?\n");
		
		int cho;
		
		const double pi=3.14159;//for case 1
		
		scanf("%d",&cho);
		
		switch(cho){
	
		//constant測試 
			case 1:
				double x;
				printf("\nA.Please enter radius!\n");
				scanf("%lf",&x);
				printf("diameter=%.15lf,circumference=%.15lf,area=%.15lf\n",2*x,2*pi*x,pi*x*x);
				long long x1;
				printf("\nPlease enter a number!(<1e18)\n");
				scanf("%lld",&x1);
				printf("The third right-most number is %lld\n",x1%1000/100);//採用換算法 
				printf("(with commas)---->%03lld,%03lld,%03lld,%03lld,%03lld,%03lld\n",x1/(long long)1e15,x1%(long long)1e15/(long long)1e12,x1%(long long)1e12/(long long)1e9,x1%(long long)1e9/(long long)1e6,x1%(long long)1e6/(long long)1e3,x1%(long long)1e3);
				break;
				
				
			case 2:
				double x2;
				long long num;//不能直接用%.0lf表示------>會被四捨五入! 
				printf("Please input a number!\n");
				scanf("%lf",&x2);
				num=x2;
				printf("Your input:%lf\nthe whole part is %lld\nthe decimal(fraction) part is%lf\n",x2,num,x2-num);
				break;
				
				
			case 3:
				double r, t;
				r = 7.25, t = 4./3;
				printf("r=%lf\nt=%lf\npi=%f\n\n", r, t, pi);
				printf("123456789012345678901234567890123456789012345678901234567890\n"); 
				printf("%10.5lf = %-12.2lf + %016.10lf + %010.5lf\n",pi,pi,(int)(pi*100000)/10%100*0.001,(int)(pi*100000)%10*0.00001);
				printf("%-10.7lf * %012.7lf * (%012.4lf)^3 = %13.7lf\n", t, pi,r, t*pi*r*r*r); //Volume of ball
				printf("%-10d * %12.4lf * (%-12.3lf)^2 = %011.4lf\n", 4, pi, r, 4*pi*r*r); //Area of ball
				printf("%010.6lf * %12.10lf = %016.7lf\n", r, t, r*t);
				break;


			case 4:
				int l, y, sum; // input: l,y ; output: sum
				// machine input: mx,my ; machine output: out
				unsigned char mx, my, out; //8 bits
				bool ca; // carry
				sum=0,ca=0;
				printf("Input: ");
				scanf("%d %d", &l, &y);
				mx = l&0x7F;//&表遇到上下11就出去1,所以這是在模擬丟出7 bitsof l 
				my = y&0x7F;
				out = mx + my + ca;
				ca = out>>7;//如果有進位必進到第八位,故向右移7位 
				sum |= out&0x7F;//|表or,sum=0,所以or結果就是7 bits相加 
				mx = l>>7&0x7F;
				my = l>>7&0x7F;
				out = mx + my + ca;
				ca = out>>7;
				sum |= (out&0x7F)<<7;
				mx = l>>14&0x7F;
				my = y>>14&0x7F;
				out = mx + my + ca;
				ca = out>>7;
				sum |= (out&0x7F)<<14;
				mx = l>>21&0x7F;
				my = y>>21&0x7F;
				out = mx + my + ca;
				ca = out>>7;
				sum |= (out&0x7F)<<21;
				mx = l>>28&0x7F;
				my = y>>28&0x7F;
				out = mx + my + ca;
				ca = out>>7;
				sum |= (out&0x7F)<<28;
				printf("%d + %d = %d\n", l, y, sum);
				break;
				
			case 5:
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
		
		printf("\nHere is lab3 for rehearsal\n1. is about the arithmetic!\n2. is about ASCII code (need to use old console!)\n3. is about polynomial.\n4. is about series of diamond!\n5. is about C.\n6.exist this rehersal!\n");
		
		printf("You want to look for?\n");
		
		int cho;
		
		
		scanf("%d",&cho);
		
		switch(cho){
	
			case 1:
				long long x,sum,con;
				sum=0,con=0;
				printf("A.1+(1+2)+(1+2+3)+(1+2+3+4)+.......?........+(1+2+3+?+n)\nPlease input n\n");//規律:每次加的term為上一項+i 
				scanf("%lld",&x);
				for(int i=1;i<=x;i++){
					con+=i;//處理term 
					sum+=con;
				}
				printf("sum=%lld\n",sum);
				printf("B.1-2+3-4+5+.......+(-1)^(n+1)*n\nPlease input n\n");//規律:每次+-互換 
				sum=0,con=1;
				scanf("%lld",&x);
				for(int i =1;i<=x;i++){
					sum+=i*con;
					con=-con;
				}
				printf("sum=%lld\n",sum);
				double sum1,term;
				sum1=0;
				term=1; 
				printf("C.1+1/2!+1/3!........+(1/n!)\nPlease input n\n");//規律:每次加的term為上一項/i 
				scanf("%lld",&x);
				for(int i=1;i<=x;i++){
					term/=i;//處理term 
					sum1+=term;
				}
				printf("sum=%lf\n",sum1);
				sum1=0;
				term=1; 
				printf("D.nx^n+(n-1)x^(n-1)+......x\nPlease input n and x\n");//規律:每次加的term為上一項-1 
				scanf("%lld %lf",&x,&term);//x取代n term取代X 
				for(int i=x;i>=0;i--){
					sum1=sum1*term+i;//用polynomial(B)來做 
				}
				printf("sum=%lf\n",sum1);
				break;
				
				
				
			case 2:
				system("chcp 437");//system is included by stdlib.h
				printf("%c",201);//左上框 
				for(int i=0;i<35;i++)
					printf("%c",205);//雙橫線 
				printf("%c\n",187);//右上框 
				printf("%c",186);//雙直線 
				for(int i=0;i<=123;i++){
					i==7?printf("%3d   %3c\n%c",i,186,186):i==8?printf("%3d   %3c",i,179):i==10?printf("%3d   %3c",i,179):i==12?printf("%3d   %3c",i,179):i==13?printf("%3d   %3c",i,179):i%4==3?printf("%3d%3c%3c\n%c",i,i,186,186):printf("%3d%3c%3c",i,i,179);
				}
				for(int i=124;i<=127;i++)
				{
					i%4==3?printf("%3d%3c%3c\n",i,i,186):printf("%3d%3c%3c",i,i,179);
				}
				printf("%c",200);//左下框 
				for(int i=0;i<35;i++)
					printf("%c",205);
				printf("%c",188);//右下框 
				break;
			case 3:
				double a0,x1,s1,v;
				s1=0;
				v=0;
				int n;
				//polynomial可分成(A)每次一個a值對一個power of x值或(B)每次乘x+a 
				printf("A.Please enter order of polynomial:\n");//first for order
				scanf("%d",&n);
				printf("x=");//second for value of x
				scanf("%lf",&x1);
				for(int a=n;a>=0;a--){
					printf("a%d=",a);
					scanf("%lf",&a0);
					for(int e=a;e>0;e--){
						v*=x1;
					}
					s1=v*a0+s1;
					v=1;
				}
				int r;
				r=0;
				for(int i=1;i<=n;i++){
					r+=i;
				}
				printf("ans=%lf,MUL times=%d,ADD times=%d\nB.Please enter order of polynomial:\n",s1,r,n+1);
				s1=0;
				scanf("%d",&n);
				printf("x=");
				scanf("%lf",&x1);
				for(int a=n;a>=0;a--){
					printf("a%d=",a);
					scanf("%lf",&a0);
					s1+=a0;//
					for(int e=1;e<=a;e+=a){
						s1=s1*x1;
					}
				}
				printf("ans=%lf, MUL times=%d, ADD times=%d\n",s1,n+1,n+1);
				break;
			case 4:
				//以下探討的變化皆為分奇偶情況! 
				//結論:不管是odd or even con1 的判斷都建議用wid來看!另外,如果有用到wid/2則,只要wid/2非為n的中間值必要+-1! 第二等分點的false判斷往往與wid-i or j有關!
				//如果是hollow 建議con1仍代表第一個及第三個的圖案!可簡化不少!
				//另外+-1通常是相對於true or false互比!
				//通常若判斷式前向只有i則後項含wid!若前項含wid/2後項亦含wid/2 
				printf("A.a diamond with all even *,please input n:");//變化:con1的false及第二分點的false 
				n =0;
				int h,wid,con1;
				//觀察可知總高度n總寬度n(for even)or n+1(for odd)
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){//分橫的for跟直的for來處理! 
					if(n%2==1)//因為偶數跟奇數處理不太一樣,故分成兩個來處理 
						con1=(i<=wid/2)?wid/2-i:i-wid/2;//分成space * space來討論故需要一個分界點! 
					else
						con1=(i<=wid/2)?wid/2-i:i-wid/2-1;
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i))?printf("*"):printf(" ");//分三段的寫法 第二個分點用true的最大值+(wid/2-i) 
						else 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i+1))?printf("*"):printf(" ");//重複出現的需要額外的+1 or-1 
					}
					printf("\n");
				}
				printf("B.a diamon with all odd*,please input n:");//變化:con1 的條件及false及第二分點的條件及false 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all由i=0執行較好--->因為wid/2會少值但又需要wid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?wid/2-i:i-wid/2;//因為是odd for all所以odd的地區較不需變動 
					else
						con1=(i<=h/2-1)?wid/2-i:i-wid/2-1;//條件+1 or -1!------->odd讓i=0的關係----->故建議改成wid!! 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2?i:h-i-1)+1)?printf("*"):printf(" ");
						else
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2-1?i:h-i-1)+1)?printf("*"):printf(" ");//第二分點的條件與con1往往有關! 
					}
					printf("\n");
				}
				printf("C.a hollow diamon(odd) with other area being *,please input n:");//變化:con1的false還有等分點的條件 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all由i=0執行較好--->因為wid/2會少值但又需要wid=n or n-1! 
					if(n%2==1)
						con1=(i<=wid/2)?wid/2-i+1:i-wid/2+1;//分成* space * 且con依舊+1 or -1 
					else
						con1=(i<=wid/2)?wid/2-i+1:i-wid/2+1;//可先固定odd or even再做另一個條件 ----->con1代表* 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(con1)?printf("*"):j<=(con1+2*(i<=wid/2?i-1:wid-i-1-1)+1)?printf(" "):printf("*");//因為wid/2並非n for odd的中間值 ,故會有落差 
						else
							j<=(con1)?printf("*"):j<=(con1+2*(i<=wid/2?i-1:wid-i-1-1)+1)?printf(" "):printf("*");
					}
					printf("\n");
				}
				printf("D.a hollow diamon(even) with other area being *,please input n:");//變化:等分點的條件及con1的條件 
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){
					if(n%2==1)
						con1=(i<=wid/2-1)?i-1:h-i;
					else
						con1=(i<=wid/2)?i-1:h-i;//此題可不用分if else on con1 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+2:i-h/2)?printf("*"):j<=(i<=h/2?(h/2-i+2+2*(con1)):(i-h/2+2*(con1)))?printf(" "):printf("*");//條件差2for i=1及中間位置上下兩側需相同 ----->用wid可讓版面至少都+-1! 
						else
							j<=(i<=h/2?h/2-i+1:i-h/2)?printf("*"):j<=(i<=h/2?h/2-i+1:i-h/2)+2*(con1)?printf(" "):printf("*");
					}
					printf("\n");
				}
				printf("E.a diamond with all character(even),please input n:");//變化:同A 
				scanf("%d",&n);
				char lit;
				lit=64;
				wid=(n%2==1)?n+1:n;
				h=n;
				
				for(int i=1;i<=h;i++){//分橫的for跟直的for來處理! 
					if(n%2==1)//因為偶數跟奇數處理不太一樣,故分成兩個來處理 
						con1=(i<=wid/2)?wid/2-i:i-wid/2;//分成space char space來討論故需要一個分界點! 
					else
						con1=(i<=wid/2)?wid/2-i:i-wid/2-1;//con1一樣處理space1
					for(int j=1;j<=wid;j++){
						if(n%2==1)//2*(i<=wid/2?i:wid-i)控制char 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i))?printf("%c",lit+(j<=wid/2?j-con1:-j+con1+2*(i<=wid/2?i:wid-i)+1)):printf(" ");//分三段的寫法 printf裡須特別注意的是A是由1組成,亦即j-con or-j+con再加上總共的字母數 
						else 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i+1))?printf("%c",lit+(j<=wid/2?j-con1:-j+con1+2*(i<=wid/2?i:wid-i+1)+1)):printf(" ");//+1是因為j有變化!故不可只加回字數 
					}
					printf("\n");
				}
				printf("F.a diamon with all character(odd),please input n:");//變化:同B 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all由i=0執行較好--->因為wid/2會少值但又需要wid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?wid/2-i:i-wid/2;//因為是odd for all所以odd的地區較不需變動 
					else
						con1=(i<=h/2-1)?wid/2-i:i-wid/2-1;//條件+1 or -1!------->odd讓i=0的關係 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2?i:h-i-1)+1)?printf("%c",lit+(j<=(wid+1)/2?j-con1:-j+con1+2*(i<=h/2?i:h-i-1)+1+1)):printf(" ");//依然要注意加完字數後要再加一給false! 
						else
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2-1?i:h-i-1)+1)?printf("%c",lit+(j<=(wid+1)/2?j-con1:-j+con1+2*(i<=h/2-1?i:h-i-1)+1+1)):printf(" ");//第二分點的條件與con1往往有關! 
					}
					printf("\n");
				}
				printf("G.a hollow diamon(odd) with other area being character,please input n:");//變化:con1的false還有等分點的條件  
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all由i=0執行較好--->因為wid/2會少值但又需要wid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?i:h-i-1;//分成* space * 且con依舊+1 or -1 
					else
						con1=(i<=h/2-1)?i:h-i-1;//可先固定odd or even再做另一個條件 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+1:i-h/2+1)?printf("%c",lit+j):j<=(i<=h/2?(h/2-i+1+2*(con1-1)+1):(i-h/2+1+2*(con1-1)+1))?printf(" "):printf("%c",lit+((wid+1)-j));//以外面為char的printf較為簡單!只需要注意後面printf!! 
						else
							j<=(i<=h/2-1?h/2-i:i-h/2+1)?printf("%c",lit+j):j<=(i<=h/2-1?h/2-i:i-h/2+1)+2*(con1-1)+1?printf(" "):printf("%c",lit+(wid+1)-j);
					}
					printf("\n");
				}
				printf("H.a hollow diamon(even) with other area being charcater,please input n:");//變化 :同D (不含con1的條件) 
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){
					if(n%2==1)
						con1=(i<=h/2)?i-1:h-i;
					else
						con1=(i<=h/2)?i-1:h-i;//此題可不用分if else on con1 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+2:i-h/2)?printf("%c",lit+j):j<=(i<=h/2?(h/2-i+2+2*(con1)):(i-h/2+2*(con1)))?printf(" "):printf("%c",lit+(wid-j)+1);//注意後面的printf要加一!因為中間值不為整數! 
						else
							j<=(i<=h/2?h/2-i+1:i-h/2)?printf("%c",lit+j):j<=(i<=h/2?h/2-i+1:i-h/2)+2*(con1)?printf(" "):printf("%c",lit+wid-j+1);
					}
					printf("\n");
				}
				break; 
			case 5:
				printf("Please input a C top and bottom!\n");
				long long top,bottom,sum2;
				sum2=1;
				scanf("%lld %lld",&top,&bottom);
				(top-bottom)>bottom?bottom=top-bottom:bottom;
				for(int i=top,k=1;i>bottom;i--,k++){
					sum2=sum2*i/k;//不可寫sum*=i/k此處=sum=i/k*sum會有整數除法的問題! 
				}
				printf("C(%lld,%lldor%lld)=%lld\n",top,bottom,top-bottom,sum2);
				break;
			case 6:
				kk=0;
				break;
			default:
				printf("You input a wrong number!\n");
		}
	}
}
	return 0;
}
