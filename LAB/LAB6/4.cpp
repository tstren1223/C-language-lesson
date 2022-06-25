#include <stdio.h>
int main(){
	int x,a=0,b=0,c=0,d=0;
	char con;
	do{
		scanf(" %d",&x);
		if(x<0||x>100){
			printf("continue(y/n)?");
			scanf(" %c",&con);
			continue;
		}
		else{
			switch(x/=10){
				case 10:
				case 9:
				case 8:
					a++;
					break;
				case 7:
					b++;
					break;
				case 6:
					c++;
					break;
				default:
					d++;
			}
			printf("continue(y/n)?");
			scanf(" %c",&con);
		}
	}while(con!='N'&&con!='n');
	printf("rank => A:%d B:%d C:%d D:%d",a,b,c,d);
	return 0;
}
