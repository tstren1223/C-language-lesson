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
	
	//�s�򪺴�����D
			case 1:
				long long x;
				printf("\nA.Please enter seconeds!\n");
				scanf("%lld",&x);
				printf("%lld hours,%lld mintes,%lld seconds\n",x/3600,x%3600/60,x%60);
				printf("B.Please enter femtometre!\n");
				scanf("%lld",&x);
				printf("%lld meter,%lld cm,%ldd mm,%lld um,%lld pm,%lld fm\n",x/(long long)1e15,(long long)(x%(long long)(1e15)/1e13),(long long)(x%(long long)(1e13)/1e12),(long long)(x%(long long)(1e12)/1e9),(long long)(x%(long long)(1e9)/1e3),(long long)(x%(long long)1e3));
				//�������D�i�u�Τ@��%�Τ@��/�Ӱ��⦸������o��!�Ĥ@��%�ΨӨ��o���D��ƶi��e����,�A��/�Ӵ��⦨���D��!!!
				break;
	
				//��digits�ഫ�ζO���ƦC���D
			case 2:
				long long x1,x2,x3,x4,sum1,sum2,con;
				int digits;
				sum1=0,sum2=0,con=10,digits=0;
				printf("\nPlease input a number\n");
				scanf("%lld",&x1);
				x3=x1;//�Ĥ@�B:���NX1�Ӷi��h�B�J 
				while(x3){
					digits++;
					x3/=2;
				}//����X�ݭn�X��digits 
				x3=x1;//���ƨϥ� 
				con=1;//�q�Ĥ@��}�l����[ 
				for(int i=0;i<digits;i++){
					sum1+=x3%2*con;
					con*=10;
					x3/=2;
				} 
				printf("A.x1=%lld,in binary,x1=%lld,digits:%d\n",x1,sum1,digits);
				//��i�����X�֦�ƨ���!
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
				x4=x2;//�Ĥ@�B�@�ˬO�δ��N�ƨӶ}��!
				while(x4){
					digits++;
					x4/=10;
				}//�@�˥���X��digits---->2��10�n/10*2��con��10��2�n/2*10��con
				x4=x2;
				con=1;
				for(int i=0;i<digits;i++){
					sum2+=x4%10*con;
					con*=2;
					x4/=10;
				}
				printf("C.x2=%lld,in decimal,x2=%lld,digits:%d\n",x2,sum2,digits);//Also,�@�˥i�H�X�֦��@�� 
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
				//���ۨӸո�digits�ۥ[ 
				digits=0;
				x3=x1;
				//con=1;
				sum1=0;
				while(x3){
					sum1+=x3%10;//�P�ഫ���t�O�u�b����*con 
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
				printf("A.\nx1=%lld\nx2=%lld\n",x1,x2);//x3=x1+x2;x4=x2+x3=x1+x2+x2;x5=x3+x4=x1+x1+x2+x2+x2�GA.�p��X4��,x1=x3�B��x3(4)=x1+x2,����x2=x3,x3(5)=x1+x2 using�T�� 
				//B�����p��x3,x1=x2(2),x2=x3(3);x3(4)=x1+x2,�M��x1=x2(3),x2=x3(4),����x3(5)=x1+x2,�A��x1=x2(4),x2=x3(5)
				for(int i=3;i<=n;i++){
					i%2==1?printf("x%d=%lld\n",i,x1+x2),x1=x1+x2:(printf("x%d=%lld\n",i,x1+x2),x2=x1+x2);
				}
				x1=1,x2=1,x3=1;//for�W��,����l��x3! 
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
	
		//constant���� 
			case 1:
				double x;
				printf("\nA.Please enter radius!\n");
				scanf("%lf",&x);
				printf("diameter=%.15lf,circumference=%.15lf,area=%.15lf\n",2*x,2*pi*x,pi*x*x);
				long long x1;
				printf("\nPlease enter a number!(<1e18)\n");
				scanf("%lld",&x1);
				printf("The third right-most number is %lld\n",x1%1000/100);//�ĥδ���k 
				printf("(with commas)---->%03lld,%03lld,%03lld,%03lld,%03lld,%03lld\n",x1/(long long)1e15,x1%(long long)1e15/(long long)1e12,x1%(long long)1e12/(long long)1e9,x1%(long long)1e9/(long long)1e6,x1%(long long)1e6/(long long)1e3,x1%(long long)1e3);
				break;
				
				
			case 2:
				double x2;
				long long num;//���ઽ����%.0lf���------>�|�Q�|�ˤ��J! 
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
				mx = l&0x7F;//&��J��W�U11�N�X�h1,�ҥH�o�O�b������X7 bitsof l 
				my = y&0x7F;
				out = mx + my + ca;
				ca = out>>7;//�p�G���i�쥲�i��ĤK��,�G�V�k��7�� 
				sum |= out&0x7F;//|��or,sum=0,�ҥHor���G�N�O7 bits�ۥ[ 
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
				printf("A.1+(1+2)+(1+2+3)+(1+2+3+4)+.......?........+(1+2+3+?+n)\nPlease input n\n");//�W��:�C���[��term���W�@��+i 
				scanf("%lld",&x);
				for(int i=1;i<=x;i++){
					con+=i;//�B�zterm 
					sum+=con;
				}
				printf("sum=%lld\n",sum);
				printf("B.1-2+3-4+5+.......+(-1)^(n+1)*n\nPlease input n\n");//�W��:�C��+-���� 
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
				printf("C.1+1/2!+1/3!........+(1/n!)\nPlease input n\n");//�W��:�C���[��term���W�@��/i 
				scanf("%lld",&x);
				for(int i=1;i<=x;i++){
					term/=i;//�B�zterm 
					sum1+=term;
				}
				printf("sum=%lf\n",sum1);
				sum1=0;
				term=1; 
				printf("D.nx^n+(n-1)x^(n-1)+......x\nPlease input n and x\n");//�W��:�C���[��term���W�@��-1 
				scanf("%lld %lf",&x,&term);//x���Nn term���NX 
				for(int i=x;i>=0;i--){
					sum1=sum1*term+i;//��polynomial(B)�Ӱ� 
				}
				printf("sum=%lf\n",sum1);
				break;
				
				
				
			case 2:
				system("chcp 437");//system is included by stdlib.h
				printf("%c",201);//���W�� 
				for(int i=0;i<35;i++)
					printf("%c",205);//����u 
				printf("%c\n",187);//�k�W�� 
				printf("%c",186);//�����u 
				for(int i=0;i<=123;i++){
					i==7?printf("%3d   %3c\n%c",i,186,186):i==8?printf("%3d   %3c",i,179):i==10?printf("%3d   %3c",i,179):i==12?printf("%3d   %3c",i,179):i==13?printf("%3d   %3c",i,179):i%4==3?printf("%3d%3c%3c\n%c",i,i,186,186):printf("%3d%3c%3c",i,i,179);
				}
				for(int i=124;i<=127;i++)
				{
					i%4==3?printf("%3d%3c%3c\n",i,i,186):printf("%3d%3c%3c",i,i,179);
				}
				printf("%c",200);//���U�� 
				for(int i=0;i<35;i++)
					printf("%c",205);
				printf("%c",188);//�k�U�� 
				break;
			case 3:
				double a0,x1,s1,v;
				s1=0;
				v=0;
				int n;
				//polynomial�i����(A)�C���@��a�ȹ�@��power of x�ȩ�(B)�C����x+a 
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
				//�H�U���Q���ܤƬҬ����_�����p! 
				//����:���ެOodd or even con1 ���P�_����ĳ��wid�Ӭ�!�t�~,�p�G���Ψ�wid/2�h,�u�nwid/2�D��n�������ȥ��n+-1! �ĤG�����I��false�P�_�����Pwid-i or j����!
				//�p�G�Ohollow ��ĳcon1���N��Ĥ@�ӤβĤT�Ӫ��Ϯ�!�i²�Ƥ���!
				//�t�~+-1�q�`�O�۹��true or false����!
				//�q�`�Y�P�_���e�V�u��i�h�ᶵ�twid!�Y�e���twid/2�ᶵ��twid/2 
				printf("A.a diamond with all even *,please input n:");//�ܤ�:con1��false�βĤG���I��false 
				n =0;
				int h,wid,con1;
				//�[��i���`����n�`�e��n(for even)or n+1(for odd)
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){//���for�򪽪�for�ӳB�z! 
					if(n%2==1)//�]�����Ƹ�_�ƳB�z���Ӥ@��,�G������ӨӳB�z 
						con1=(i<=wid/2)?wid/2-i:i-wid/2;//����space * space�ӰQ�׬G�ݭn�@�Ӥ����I! 
					else
						con1=(i<=wid/2)?wid/2-i:i-wid/2-1;
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i))?printf("*"):printf(" ");//���T�q���g�k �ĤG�Ӥ��I��true���̤j��+(wid/2-i) 
						else 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i+1))?printf("*"):printf(" ");//���ƥX�{���ݭn�B�~��+1 or-1 
					}
					printf("\n");
				}
				printf("B.a diamon with all odd*,please input n:");//�ܤ�:con1 �������false�βĤG���I�������false 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all��i=0������n--->�]��wid/2�|�֭Ȧ��S�ݭnwid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?wid/2-i:i-wid/2;//�]���Oodd for all�ҥHodd���a�ϸ������ܰ� 
					else
						con1=(i<=h/2-1)?wid/2-i:i-wid/2-1;//����+1 or -1!------->odd��i=0�����Y----->�G��ĳ�令wid!! 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2?i:h-i-1)+1)?printf("*"):printf(" ");
						else
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2-1?i:h-i-1)+1)?printf("*"):printf(" ");//�ĤG���I������Pcon1��������! 
					}
					printf("\n");
				}
				printf("C.a hollow diamon(odd) with other area being *,please input n:");//�ܤ�:con1��false�٦������I������ 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all��i=0������n--->�]��wid/2�|�֭Ȧ��S�ݭnwid=n or n-1! 
					if(n%2==1)
						con1=(i<=wid/2)?wid/2-i+1:i-wid/2+1;//����* space * �Bcon����+1 or -1 
					else
						con1=(i<=wid/2)?wid/2-i+1:i-wid/2+1;//�i���T�wodd or even�A���t�@�ӱ��� ----->con1�N��* 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(con1)?printf("*"):j<=(con1+2*(i<=wid/2?i-1:wid-i-1-1)+1)?printf(" "):printf("*");//�]��wid/2�ëDn for odd�������� ,�G�|�����t 
						else
							j<=(con1)?printf("*"):j<=(con1+2*(i<=wid/2?i-1:wid-i-1-1)+1)?printf(" "):printf("*");
					}
					printf("\n");
				}
				printf("D.a hollow diamon(even) with other area being *,please input n:");//�ܤ�:�����I�������con1������ 
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){
					if(n%2==1)
						con1=(i<=wid/2-1)?i-1:h-i;
					else
						con1=(i<=wid/2)?i-1:h-i;//���D�i���Τ�if else on con1 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+2:i-h/2)?printf("*"):j<=(i<=h/2?(h/2-i+2+2*(con1)):(i-h/2+2*(con1)))?printf(" "):printf("*");//����t2for i=1�Τ�����m�W�U�ⰼ�ݬۦP ----->��wid�i�������ܤֳ�+-1! 
						else
							j<=(i<=h/2?h/2-i+1:i-h/2)?printf("*"):j<=(i<=h/2?h/2-i+1:i-h/2)+2*(con1)?printf(" "):printf("*");
					}
					printf("\n");
				}
				printf("E.a diamond with all character(even),please input n:");//�ܤ�:�PA 
				scanf("%d",&n);
				char lit;
				lit=64;
				wid=(n%2==1)?n+1:n;
				h=n;
				
				for(int i=1;i<=h;i++){//���for�򪽪�for�ӳB�z! 
					if(n%2==1)//�]�����Ƹ�_�ƳB�z���Ӥ@��,�G������ӨӳB�z 
						con1=(i<=wid/2)?wid/2-i:i-wid/2;//����space char space�ӰQ�׬G�ݭn�@�Ӥ����I! 
					else
						con1=(i<=wid/2)?wid/2-i:i-wid/2-1;//con1�@�˳B�zspace1
					for(int j=1;j<=wid;j++){
						if(n%2==1)//2*(i<=wid/2?i:wid-i)����char 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i))?printf("%c",lit+(j<=wid/2?j-con1:-j+con1+2*(i<=wid/2?i:wid-i)+1)):printf(" ");//���T�q���g�k printf�̶��S�O�`�N���OA�O��1�զ�,��Yj-con or-j+con�A�[�W�`�@���r���� 
						else 
							j<=con1?printf(" "):j<=(con1+2*(i<=wid/2?i:wid-i+1))?printf("%c",lit+(j<=wid/2?j-con1:-j+con1+2*(i<=wid/2?i:wid-i+1)+1)):printf(" ");//+1�O�]��j���ܤ�!�G���i�u�[�^�r�� 
					}
					printf("\n");
				}
				printf("F.a diamon with all character(odd),please input n:");//�ܤ�:�PB 
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all��i=0������n--->�]��wid/2�|�֭Ȧ��S�ݭnwid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?wid/2-i:i-wid/2;//�]���Oodd for all�ҥHodd���a�ϸ������ܰ� 
					else
						con1=(i<=h/2-1)?wid/2-i:i-wid/2-1;//����+1 or -1!------->odd��i=0�����Y 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2?i:h-i-1)+1)?printf("%c",lit+(j<=(wid+1)/2?j-con1:-j+con1+2*(i<=h/2?i:h-i-1)+1+1)):printf(" ");//�̵M�n�`�N�[���r�ƫ�n�A�[�@��false! 
						else
							j<=con1?printf(" "):j<=(con1+2*(i<=h/2-1?i:h-i-1)+1)?printf("%c",lit+(j<=(wid+1)/2?j-con1:-j+con1+2*(i<=h/2-1?i:h-i-1)+1+1)):printf(" ");//�ĤG���I������Pcon1��������! 
					}
					printf("\n");
				}
				printf("G.a hollow diamon(odd) with other area being character,please input n:");//�ܤ�:con1��false�٦������I������  
				scanf("%d",&n);
				wid=(n%2==1)?n:n-1;
				h=n;
				for(int i=0;i<h;i++){//odd * for all��i=0������n--->�]��wid/2�|�֭Ȧ��S�ݭnwid=n or n-1! 
					if(n%2==1)
						con1=(i<=h/2)?i:h-i-1;//����* space * �Bcon����+1 or -1 
					else
						con1=(i<=h/2-1)?i:h-i-1;//�i���T�wodd or even�A���t�@�ӱ��� 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+1:i-h/2+1)?printf("%c",lit+j):j<=(i<=h/2?(h/2-i+1+2*(con1-1)+1):(i-h/2+1+2*(con1-1)+1))?printf(" "):printf("%c",lit+((wid+1)-j));//�H�~����char��printf����²��!�u�ݭn�`�N�᭱printf!! 
						else
							j<=(i<=h/2-1?h/2-i:i-h/2+1)?printf("%c",lit+j):j<=(i<=h/2-1?h/2-i:i-h/2+1)+2*(con1-1)+1?printf(" "):printf("%c",lit+(wid+1)-j);
					}
					printf("\n");
				}
				printf("H.a hollow diamon(even) with other area being charcater,please input n:");//�ܤ� :�PD (���tcon1������) 
				scanf("%d",&n);
				wid=(n%2==1)?n+1:n;
				h=n;
				for(int i=1;i<=h;i++){
					if(n%2==1)
						con1=(i<=h/2)?i-1:h-i;
					else
						con1=(i<=h/2)?i-1:h-i;//���D�i���Τ�if else on con1 
					for(int j=1;j<=wid;j++){
						if(n%2==1)
							j<=(i<=h/2?h/2-i+2:i-h/2)?printf("%c",lit+j):j<=(i<=h/2?(h/2-i+2+2*(con1)):(i-h/2+2*(con1)))?printf(" "):printf("%c",lit+(wid-j)+1);//�`�N�᭱��printf�n�[�@!�]�������Ȥ������! 
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
					sum2=sum2*i/k;//���i�gsum*=i/k���B=sum=i/k*sum�|����ư��k�����D! 
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
